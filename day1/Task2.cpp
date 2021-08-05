#include <iostream>
#include <cmath>

using namespace std;


int main() {

    float x1, y1, x2, y2, x3, y3;
    float len_1, len_2, len_3;
    float p;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    len_1 = sqrt(abs((x2 - x1) * (x2 - x1)) + abs((y2 - y1) * (y2 - y1)));
    len_2 = sqrt(abs((x2 - x3) * (x2 - x3)) + abs((y2 - y3) * (y2 - y3)));
    len_3 = sqrt(abs((x1 - x3) * (x1 - x3)) + abs((y1 - y3) * (y1 - y3)));

    p = (len_1 + len_2 + len_3) / 2;

    cout << "S = " << sqrt(p * (p - len_1) * (p - len_2) * (p - len_3));


}

