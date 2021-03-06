/*
Crie um algoritmo que tenha uma função que receba
dois ponteiros e troca o valor de referência entre
os dois.
*/
#include <iostream>

using namespace std;

void troca_ponteiros(int* &pont1, int* &pont2){
    int aux;
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
}

int main(){
    int* ponteiro1 = new int;
    int* ponteiro2 = new int;
    cout << "Digite o valor do ponteiro 1: ";
    cin >> *ponteiro1;
    cout << "\nDigite o valor do ponteiro 2: ";
    cin >> *ponteiro2;
    
    cout << "\nAntes: P1 = " << ponteiro1 << " P2 = " << ponteiro2;
    cout << "\nAntes: P1 = " << *ponteiro1 << " P2 = " << *ponteiro2;

    troca_ponteiros(ponteiro1, ponteiro2);

    cout << "\nDepois: P1 = " << ponteiro1 << " P2 = " << ponteiro2;
    cout << "\nDepois: P1 = " << *ponteiro1 << " P2 = " << *ponteiro2;

    return 0;
}