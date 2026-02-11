#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double summ_square = (a * a) + (b * b);
    cout << "summ_square = " << summ_square << "\n";
    double raz_square = (a * a) - (b * b);
    cout << "raz_square = " << raz_square << "\n";
    double proiz_square = (a * a) * (b * b);
    cout << "proiz_square = " << proiz_square << "\n";
    double chast_square = (a * a) / (b * b);
    cout << "chast_square = " << chast_square << "\n";
    return 0;
}