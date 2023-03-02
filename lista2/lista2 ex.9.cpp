#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 1; ; i++) {
        cout << num << " x " << i << " = " << num*i << endl;
    }

    return 0;
}
