#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz_1[3][3], matriz_resultado[3][3], numero;

    cout << "Carga da matriz"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz_1[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Digite um numero: ";
    cin >> numero;

    // Geracao da matriz resultado
         cout << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_resultado[linha][coluna] = matriz_1[linha][coluna] * numero;
        }
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da multiplicacao da matriz pelo numero informado "
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_resultado[linha][coluna] << " ";
        }
        cout << "\n";
    
    }
    cout << "\n\n";
}