#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int number1;
   
    cout << "Informe um numero:";
    cin >> number1;
   
   
    if (number1 < 0){
        cout << "negativo";
       
    }else if (number1 > 0){
        cout << "positivo";        
    }
   
    else{
        cout << "Igual a zero";
    }
}
