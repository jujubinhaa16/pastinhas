#include <iostream>


using namespace std;


main(){

    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Informe um numero: ";

    cin >> numero;

   

    cout << "O valor " << numero << " em bin�rio � ";

   

    for (int i = 2; i >= 0; i--) {

        int bit = (numero >> i) & 1;

        cout << bit;

    }




}
