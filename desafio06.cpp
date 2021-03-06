/*
Crie um algoritmo em que o usuário informa gastos com alimentação
de 5 famílias, calcula a média de gastos e diz de cada família,
se o gasto está abaixo da média, acima da média ou na média.
*/

#include <iostream>

using namespace std;

int main(){
    int tamanho = 5;
    float *familias = new float[tamanho];
    float soma_gastos = 0;

    for(int i = 0; i < tamanho; i++){
        cout << "Informe os gastos da famlia " << i+1 << endl;
        cin >> familias[i];
        soma_gastos += familias[i];
    }

    float media_gastos = soma_gastos / tamanho;

    cout << "\nTotal dos gastos: R$" << soma_gastos;
    cout << "\nMedia dos gastos: R$" << media_gastos << endl;

    cout << endl;

    for(int i = 0; i < tamanho; i++){
        if(familias[i] > media_gastos){
            cout << "Familia " << i+1 << " gastou R$" << familias[i] << " e esta acima da media." << endl;
        }else if(familias[i] < media_gastos){
            cout << "Familia " << i+1 << " gastou R$" << familias[i] << " e esta abaixo da media" << endl;
        }else{
            cout << "Familia " << i+1 << " gastou R$" << familias[i] << " e esta na media" << endl;
        }
    }

    delete [] familias;

    return 0;
}