#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10];

    int navio1;

        for (int j = 0; j < 10; j++)

        {

              printf("  %c", colunas[j]);

        }

        printf("\n");

        for (int i = 0; i < 10; i++)

        {

              printf("%d", linhas[i]);

              for (int j = 0; j < 10; j++)

              {

                     printf(" 0 ");


              }

              printf("\n");

        }

    return 0;
}

