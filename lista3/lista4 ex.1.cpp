#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
   
    int semana;
   
    cout << "Informe um dia da semana: ";
    cin >> semana;
   
    switch (semana){
        case 1: cout << "domingo";
        break;
        case 2: cout << "segunda";
        break;
        case 3: cout << "terça";
        break;
        case 4: cout << "quarta";
        break;
        case 5: cout << "quinta";
        break;
        case 6: cout << "sexta";
        break;
        case 7: cout << "sabado";
        break;        
        default: cout << "dia da semana inexistente";
    }
}
