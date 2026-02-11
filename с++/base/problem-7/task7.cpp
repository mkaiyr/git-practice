#include <iostream>
using namespace std;
int main() {
    double R;
    const double PI = 3.14;
    cin >> R;
    double L = 2 * PI * R;
    double S = PI * (R * R);
    cout << "L = " << L << "\n";
    cout << "S = " << S;
    return 0;
}