// Crie um algoritmo que calcule a função f(a) de:
//f(x) = x² - 3x + 5

#include <iostream>
#include <math.h>

using namespace std;

float funcao( int numero ){
    float valor = pow((float)numero, 2.0) + (3*numero) + 5;
    return valor;
}

int main(){
    int numero_entrada;
    cout << "Insira um numero: " << endl;
    cin >> numero_entrada;

    cout << "\nO valor calculado e: " << funcao(numero_entrada) << endl;    
    return 0;
}
