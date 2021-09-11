#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz[6][5], soma;

    cout << "Carga da matriz"
         << "\n";
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz[linha][coluna];
        }
    }
    cout << "\n\n";

    // Geracao da matriz resultado
         cout << "\n";
    for (int coluna = 0; coluna < 5; coluna++)
    {
        soma = 0;
        for (int linha = 0 ; linha < 5 ; linha++){
            soma += matriz[linha][coluna];
        }
        matriz[5][coluna] = soma;
    }

    cout << "Mostrando o conteudo da matriz "
         << "\n\n";
    for (int linha = 0; linha < 6; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << "\n";
    
    }
}