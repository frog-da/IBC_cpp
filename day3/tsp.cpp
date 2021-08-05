#include <iostream>
#include <vector>

using namespace std;

vector<int> find_shortest_path(int n, int min, vector<int> path, vector<vector<int>> distances, vector<int> cities) {
    if (cities.empty()) {
        return path;
    }
    int minimum = min;
    vector<int> shortestPath = path;
    shortestPath.push_back(cities[0]);
    for (int i = 0; i < cities.size(); ++i) {
        vector<int> tempPath = path;
        vector<int> tempCities = cities;
        tempPath.push_back(cities[i]);
        tempCities.erase(tempCities.begin() + i);
        vector<int> newPath = find_shortest_path(n, min, tempPath, distances, tempCities);
        int dist = 0;
        for (int j = 0; j < n; ++j) {
            dist += distances[newPath[j]][newPath[(j + 1) % n]];
        }
        if (dist < minimum) {
            minimum = dist;
            shortestPath = newPath;
        }
    }
    return shortestPath;
}

int main() {
    int n;
    cin >> n;
    vector<int> cities;
    vector<vector<int>> distances;
    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            cities.push_back(i);
        }
        vector<int> row;
        for (int j = 0; j < n; ++j) {
            int el;
            cin >> el;
            row.push_back(el);
        }
        distances.push_back(row);
    }
    vector<int> temp;
    temp.push_back(0);
    vector<int> shortestPath = find_shortest_path(n, 1000000, temp, distances, cities);
    int dist = 0;
    for (int j = 0; j < n; ++j) {
        dist += distances[shortestPath[j]][shortestPath[(j + 1) % n]];
    }
    cout << dist << endl;
    cout << "Path: ";
    for (int i = 0; i < n; ++i) {
        cout << shortestPath[i] << ' ';
    }
    cout << '0';
    return 0;
}