/*
Crie um algoritmo que tenha uma função que calcula o
fatorial de um número inteiro positivo
*/

#include <iostream>

using namespace std;

int calcularFatorial(int numero){
    int acumulado = numero;
    int fatorial;

    while(numero > 1){
        acumulado = acumulado * (numero - 1);
        fatorial = acumulado;
        numero--;
    }

    return fatorial;
}

int main(){
    int valor;

    while(true){
        cout << "Insira um valor: " << endl;
        cin >> valor;

        if(valor <= 0){
            cout << "O numero e negativo\n";
        } else{
            break;
        }
    }

    int valorfat = calcularFatorial(valor);

    cout << "\nO fatorial de " << valor << " e " << valorfat;

    return 0;
}

