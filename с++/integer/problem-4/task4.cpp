#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if (A > B) {
    int delenie = A / B;
    cout << "kol-vo otrezkov = " << delenie << "\n";
    }else{
        cout << "A dolzhno byt bolshe B";
    }
    return 0;
}