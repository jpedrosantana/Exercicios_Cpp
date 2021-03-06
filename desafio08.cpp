/*
Crie um algoritmo em que o usuário informa o tamanho de um vetor,
e seus elementos. O algoritmo deve imprimir este vetor e perguntar
ao usuário se ele quer imprimir outro vetor. Utilize delete após
a impressão do vetor.
*/

#include <iostream>

using namespace std;

int main(){
    int tamanho, flag;

    do{
        cout << "Insira o tamanho do vetor: ";
        cin >> tamanho;

        int *vetor = new int[tamanho];

        for(int i = 0; i < tamanho; i++){
            cout << "Digite o elemento " << i+1 << " do vetor." << endl;
            cin >> vetor[i];
        }

        for(int i = 0; i < tamanho; i++){
            cout << vetor[i] << " ";
        }

        cout << "\nDigite 0 para imprimir outro vetor, ou qualquer tecla para sair: ";
        cin >> flag;
        delete [] vetor;

    }while(flag == 0);
    return 0;
}