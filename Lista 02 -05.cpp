#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz_M[3][3], matriz_N[3][3], matriz_MxN[3][3], matriz_MmaisN[3][3], matriz_MmenosN[3][3], contador = 1, mult;

    cout << "\n\n";
    cout << "-- Carga da matriz M --"
         << "\n\n";
    cout << "Informe 9 numeros inteiros"
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << contador << " -> ";
            cin >> matriz_M[linha][coluna];
            contador++;
        }
    }
    cout << "\n\n";
    cout << "-- Carga da matriz N --"
         << "\n\n";
    cout << "Informe 9 numeros inteiros"
         << "\n\n";
    contador = 1;
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << contador << " -> ";
            cin >> matriz_N[linha][coluna];
            contador++;
        }
    }
    cout << "\n\n";

    cout << "Mostrando a matriz M "
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_M[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    cout << "Mostrando a matriz N "
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_N[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando de M x N
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            mult = 0;
            for (int dentro = 0; dentro < 3; dentro++)
            {
                mult += matriz_M[linha][dentro] * matriz_N[dentro][coluna];
            }
            matriz_MxN[linha][coluna] = mult;
        }
    }
    cout << "Mostrando a matriz M x N "
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_MxN[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando de M + N
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_MmaisN[linha][coluna] = matriz_M[linha][coluna] + matriz_N[linha][coluna];
        }
    }

    cout << "Mostrando a matriz M + N "
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_MmaisN[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    // Gerando de M - N
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_MmaisN[linha][coluna] = matriz_M[linha][coluna] - matriz_N[linha][coluna];
        }
    }

    cout << "Mostrando a matriz M - N "
         << "\n\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_MmaisN[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}