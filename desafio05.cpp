/*
Em um programa de moradia popular, somente pessoas com mais de 21
anos e renda abaixo de R$1200,00 podem participar.
Crie um algoritmo em que o usuário informa sua idade e sua
renda, e é informado se ele pode ou não participar desse programa
*/

#include <iostream>

using namespace std;

void moradiaPopular(int idade, float renda){
    if(idade > 21 && renda <= 1200.00){
        cout << "\nVoce pode participar do programa Moradia Popular!";
    } else{
        cout << "\nVoce nao pode participar do programa.";
    }
}

int main(){
    int idade;
    float renda;

    cout << "Digite sua idade: " << endl;
    cin >> idade;
    cout <<"\nInforme sua renda: " << endl;
    cin >> renda;

    moradiaPopular(idade, renda);

}


