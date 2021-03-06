/*
Crie um algoritmo em que o usuário informa a dimensão
de uma matriz, e os elementos de duas matrizes (ambas
com a mesma dimensão) e o algoritmo mostra a soma entre
as duas matrizes.
*/

#include <iostream>

using namespace std;

/*

int calcula_matriz(int matriz[a][b]){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "Insira o elemento da Linha " << i+1 << " e Coluna " << j+1 << endl;
            cin >> matriz[i][j];
        }
    }
    return matriz[linha][coluna];
}

*/

int main(){
    int linha, coluna;
    cout << "Informe as dimensoes das matrizes: ";
    cout << "\nLinhas: ";
    cin >> linha;
    cout << "\nColunas: ";
    cin >> coluna;
    cout << endl;

    float matrizA[linha][coluna], matrizB[linha][coluna];

    //Rotina para a matriz 1
    cout << "\nElementos da Matriz A" << endl;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "Insira o elemento da Linha " << i+1 << " e Coluna " << j+1 << endl;
            cin >> matrizA[i][j];
        }
    }

    //Rotina para a matriz 2
    cout << "\nElementos da Matriz B" << endl;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "Insira o elemento da Linha " << i+1 << " e Coluna " << j+1 << endl;
            cin >> matrizB[i][j];
        }
    }

    cout << "\nA soma das matrizes e: " << endl;
    //Print da matriz somada
    for(int i =0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << matrizA[i][j] + matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}