/*
Crie um algoritmo que calcula a potência B^E, em que o usuário
informa o número real B e um numero natural E. Nesse algoritmo,
sempre que é informado o resultado da potência, é perguntando 
ao usuário se ele quer calcular outra potência
*/

#include <iostream>

using namespace std;

float calcularPotencia(float base, int expoente){
    float potencia = 1;

    for(int i = 0; i < expoente; i++){
        potencia = potencia * base; 
    }

    return potencia;
}

int main(){
    float base;
    int expoente;

    while(1){
        cout << "Insira a base: " << endl;
        cin >> base;
        cout <<"\nInsira o expoente: " << endl;
        cin >> expoente;

        float resultadoPot;
        resultadoPot = calcularPotencia(base, expoente);
        cout << "\nA potencia e de " << resultadoPot;

        cout << "\nDigite 1 se quiser calcular outra potencia e 0 se nao quiser\n";
        int flag;
        cin >> flag;
        if(flag == 0){
            break;
        }
    }

    return 0;
}
