#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i, resultado = 0;
 
     cout << "Digite um n�mero: ";
     cin >> num;
     
     for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
           resultado++;
           break;
        }
     }
     
     if (resultado == 0)
        cout << "� um n�mero primo", num;
     else
        cout << "N�o � um n�mero primo", num;
     
     return 0;
}
