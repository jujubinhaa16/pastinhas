#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
   
    int periodo;
    
    cout << "Informe um numero at� 3 : ";
    cin >> periodo;
    
    switch (periodo){
        case 1: cout << "manh�";
        break;
        case 2: cout << "tarde";
        break;
        case 3: cout << "noite";
        break;
}
}
