#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    cout << "M�ltiplos de " << num << " menores que 100:" << endl;

    for (int i = num; i < 100; i += num) {
        cout << i << endl;
    }

    return 0;
}
