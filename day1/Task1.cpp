#include <iostream>

using namespace std;


int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b > c and b + c > a and a + c > b) {
        cout << "existence";
    } else {
        cout << "not existence";
    }
}