#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz_1[10][10], matriz_transf1[10][10], matriz_transf2[10][10], matriz_transf3[10][10], matriz_transf4[10][10], transf3; // numero = 0;

    cout << "Carga da matriz 10 x 10"
         << "\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << "Informe um numero inteiro: " <<;
            cin >> matriz_1[linha][coluna];
            // numero = numero + 1;
            // matriz_1[linha][coluna] = numero;
        }
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da matriz original"
         << "\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << matriz_1[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando a primeira transformacao
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            
            if(linha == 6){
                matriz_transf1[0][coluna] = matriz_1[6][coluna];
            }
            else if(linha == 0){
                matriz_transf1[6][coluna] = matriz_1[0][coluna];
            }
            else{
                matriz_transf1[linha][coluna] = matriz_1[linha][coluna];
            }

        }
    }

    cout << "Mostrando o conteudo da matriz resultado - 1a transformacao"
         << "\n\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << matriz_transf1[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando a segunda transformacao
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            if(coluna == 2){
                matriz_transf2[linha][8] = matriz_transf1[linha][2];
            }
            else if(coluna == 8){
                matriz_transf2[linha][2] = matriz_transf1[linha][8];
            }
            else{
                matriz_transf2[linha][coluna] = matriz_transf1[linha][coluna];
            }

        }
    }

    cout << "Mostrando o conteudo da matriz resultado - 2a transformacao"
         << "\n\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << matriz_transf2[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando a terceira transformacao
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            if(linha == coluna){
                transf3 = 9 - coluna;
                matriz_transf3[linha][coluna] = matriz_transf2[linha][transf3];
            }
            else if(linha + coluna == 9){
                transf3 = 9 - coluna;
                matriz_transf3[linha][coluna] = matriz_transf2[linha][transf3];
            }
            else{
                matriz_transf3[linha][coluna] = matriz_transf2[linha][coluna];
            }

        }
    }

    cout << "Mostrando o conteudo da matriz resultado - 3a transformacao"
         << "\n\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << matriz_transf3[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando a quarta transformacao
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            if(linha == 5){
                matriz_transf4[linha][coluna] = matriz_transf3[coluna][0];
            }
            else if(coluna == 0){
                matriz_transf4[linha][coluna] = matriz_transf3[5][linha];
            }
            else{
                matriz_transf4[linha][coluna] = matriz_transf3[linha][coluna];
            }

        }
    }

    cout << "Mostrando o conteudo da matriz resultado - 4a transformacao"
         << "\n\n";
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << matriz_transf4[linha][coluna] << " ";
        }
        cout << "\n";
    }
}