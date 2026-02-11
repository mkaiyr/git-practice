#include <iostream>
using namespace std;
int main() {
    int byte;
    cin >> byte;
    int kb = byte / 1024;
    cout << "result = " << kb << " kb" << "\n";
    return 0;
}