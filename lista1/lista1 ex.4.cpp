#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    string nome;
   
    cout << "Informe sua idade: ";
    cin >> idade;
   
    cout << "Informe seu nome: ";
    cin >> nome;

   
    if (idade < 18){
        cout << nome << ", voc� � menor de idade";

       
    }else if (idade >= 18 && idade <= 65){
        cout << nome << ", voc� � adulto";
       
    }else if (idade > 65){
        cout << nome << ", voc� � idoso";
    }

}
