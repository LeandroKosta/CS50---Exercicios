#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    int height;
    char c;

    // Ask the user for the height size.
    // Pergunte ao usuário o tamanho da altura.
    printf("Enter the height (1-8): ");

    // Keep reading input until a valid number is entered
    // Continue lendo a entrada até que um número válido seja inserido
    while (1)
    {
        // Read in a character
        // Leia o caractere
        c = getchar();

        // If the character is a number, convert it to an integer and break out of the loop
        // Se o caractere for um número, converta-o em um número inteiro e saia do loop
        if (isdigit(c))
        {
            height = c - '0';
            break;
        }
        // If the character is not a number, consume the rest of the input and try again
        // Se o caractere não for um número, consuma o restante da entrada e tente novamente
        while (getchar() != '\n')
        {
        }

        // Print an error message and prompt the user again
        // Imprima uma messagem de erro e avisa o usuário novamente
        printf("Invalid input. Ente the height (1-8): ");
    }

    // If the height is out of bounds, keep asking for a valide input
    // Se a altura estiver fora dos limites, continue solicitando uma entrada válida
    while (height < 1 || height > 8)
    {
        printf("Invalid input. Enter the height (1-8): ");

        // Read in character
        // Lê um caractere
        c = getchar();

        // If the character is number, convert it to an integer and break out of the loop
        // Se o caractere for um número, converta-o em um número inteiro e saia do loop
        if (isdigit(c))
        {
            height = c - '0';
            while (getchar() != '\n')
            {
            }
            break;
        }

        // If the character is not a number, consume the rest of the input and try again
        // Se o caractere não for um número, consuma o restante da entrada e tente novamente
        while (getchar() != '\n')
        {
        }

        // Print an error message and prompt the user again
        // Imprima uma messagem de erro e avisa o usuário novamente
        printf("Invalid input. Ente the height (1-8): ");
    }

    // Iterate the variable i until the height size
    // Itere a variável 1 até o tamanho da altura
    for (int i = 1; i <= height; i++)
    {
        // Print leading spaces
        // Imprime espaços iniciais
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        // Print the #s from right to left
        // Imprime os #s da direita para a esquerda
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        // Print 2 spaces
        // Imprime 2 espaços
        {
            printf("  ");
        }

        // Print the #s from left to right
        // Imprime os #s da esquerda para direira
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Don't forget the line break!
        // Não se esqueça de quebrar de linha!
        printf("\n");
    }

    return 0;
}
