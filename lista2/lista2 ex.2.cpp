#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, num, soma;
   
    cout << "Introduza um n�mero inteiro para obter o somat�rio dos seus digitos: ";
    cin >> numero;
    soma=0;
   
    while (numero>0)
    {
    num=numero%10;
    numero=(numero-num)/10;
    soma=soma+num;
    }
   
    cout << ("O somat�rio �: ",soma);

}
