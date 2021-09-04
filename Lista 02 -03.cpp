#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz_1[5][5], soma_principal = 0, soma_secundaria = 0;

    cout << "Carga da matriz"
         << "\n";
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz_1[linha][coluna];
        }
    }
    cout << "\n\n";

    // Geracao da matriz resultado
         cout << "\n";
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            if(linha == coluna){
                soma_principal+= matriz_1[linha][coluna];
            }
            if(linha + coluna == 4){
                soma_secundaria+= matriz_1[linha][coluna];
            }
        }
    }

    cout << "Mostrando o conteudo da matriz "
         << "\n";
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            cout << matriz_1[linha][coluna] << " ";
        }
        cout << "\n";
    
    }

    cout << "A soma dos elementos da diagonal principal eh: " << soma_principal << "\n\n";
    cout << "A soma dos elementos da diagonal secundaria eh: " << soma_secundaria << endl;
}