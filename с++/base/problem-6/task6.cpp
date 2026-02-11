#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);
    cout << "V = " << V << "\n";
    cout << "S = " << S;
    return 0;
}