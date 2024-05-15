#include <cs50.h>
#include <stdio.h>

int main()
{
    int height;

    // Ask the user for the height size.
    // Pergunte ao usuário o tamanho da altura.
    printf("Enter the height (1-8): ");
    scanf("%d", &height);

    // If the height size is less than 1 or greater than 8 (or not integer), stay at this step until the user enters a valid input.
    // Se o tamanho da altura for menor que 1 ou maio que 8 (ou não for inteiro), permaneça nesta etapa até que o usuário insira uma entrada válida.
    while (height < 1 || height > 8)
    {
        printf("Invalid input. Enter the height (1-8): ");
        scanf("%d", &height);
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

        // Don't forget the line break!
        // Não se esqueça de quebrar de linha!
        printf("\n");
    }

    return 0;
}
