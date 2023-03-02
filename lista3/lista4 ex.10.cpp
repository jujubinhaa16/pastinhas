#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
   
    int semana;
   
    cout << "Informe um dia da semana: ";
    cin >> semana;
   
    switch (semana){
        case 1: cout << "final de semana";
        break;
        case 2: cout << "dia util";
        break;
        case 3: cout << "dia util";
        break;
        case 4: cout << "dia util";
        break;
        case 5: cout << "dia util";
        break;
        case 6: cout << "dia util";
        break;
        case 7: cout << "final de semana";
        break;        
        default: cout << "dia da semana inexistente";
    }
}
