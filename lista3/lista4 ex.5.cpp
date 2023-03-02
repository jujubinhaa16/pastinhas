#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int letras;

       cout << "Informe um numero de 1 a 5: ";
       cin >> letras;
   
    switch (letras){
        case 1: cout << " A";
        break;
        case 2: cout << " B";
        break;
        case 3: cout << " C";
        break;
        case 4: cout << " D";
        break;
        case 5: cout << " E";
        break;
    }
   
}
