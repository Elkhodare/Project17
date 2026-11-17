#include <iostream>
using namespace std;

int main() {
    int x, y;
    double z, w;
    cin >> x >> y;

    z = (x + y) / (x * x + y * y + 1.0);
    w = x / (y * y + 1.0);

    cout << "z = " << z << endl;
    cout << "w = " << w << endl;
    return 0;
}