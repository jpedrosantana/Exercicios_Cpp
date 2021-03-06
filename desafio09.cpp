/*
Crie um algoritmo utilizando apenas ponteiros, em que
o usuário informa a idade de duas pessoas, e o algoritmo
informa a média dessas idades.
*/

#include <iostream>

using namespace std;

int main(){
    int *idade1 = new int;
    int *idade2 = new int;
    int *media = new int;
    cout << "Insira a idade 1: ";
    cin >> *idade1;
    cout << "\nInsira a idade 2: ";
    cin >> *idade2;

    *media = (*idade1 + *idade2) / 2;
    cout << "\nMedia de idade de " << *media << " anos.";

    delete [] idade1;
    delete [] idade2;
    delete [] media;

    return 0;
}