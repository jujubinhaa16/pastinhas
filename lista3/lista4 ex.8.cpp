#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
   
    float celsius, fahrenheit, kelvin;
    int opcao;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    cout << "Escolha a opcao desejada: " << endl;
    cout << "1 - Converter para Fahrenheit" << endl;
    cout << "2 - Converter para Kelvin" << endl;
   
   
cin >> opcao;

    switch (opcao)
    {
        case 1:
            fahrenheit = (celsius * 9 / 5) + 32;
            cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit" << endl;
            break;
           
        case 2:
            kelvin = celsius + 273.15;
            cout << "\n" << celsius << " graus Celsius equivalem a " << kelvin << " graus Kelvin" << endl;
            break;
       
       
    default:
            cout << "Opção inválida!" << endl;
            break;}
   
    return 0;
 
}
