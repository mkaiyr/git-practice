#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    if (a >= 0 && b >= 0) {
        double kv_kor = sqrt(a * b);
        cout << "kv kor = " << kv_kor << "\n";
    } else {
        cout << "ERROR";
    }
    return 0;
}