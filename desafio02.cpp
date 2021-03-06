/*
Crie um algoritmo em que o usuário informa as notas de
três provas de um aluno e a média de nota da turma toda.
O algoritmo deve calcular a média desse aluno e informar
se sua nota é acima da média, abaixo da média ou está
na média
*/

#include <iostream>

using namespace std;


void nota_final(float nota1, float nota2, float nota3, float media_sala){
    float media_aluno = (nota1 + nota2 + nota3) / 3;

    if(media_aluno > media_sala){
        cout << "Parabens, voce esta acima da media!";
    }
    else if(media_aluno == media_sala){
        cout << "Voce esta na media";
    }
    else{
        cout << "Voce esta abaixo da media.";
    }

}

int main(){
    float prova1;
    float prova2;
    float prova3;
    float media_sala;

    cout << "Digite a primeira nota: " << endl;
    cin >> prova1;
    cout << "\nDigite a segunda nota: " << endl;
    cin >> prova2;
    cout << "\nDigite a terceira nota: " << endl;
    cin >> prova3;
    cout << "\nDigite a media da sala: " << endl;
    cin >> media_sala;

    nota_final(prova1, prova2, prova3, media_sala);

    return 0;
}