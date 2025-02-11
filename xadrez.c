#include <stdio.h>

// Função para mover o Bispo
int moverBispo(int qty)
{
    // Loop para repetir o movimento do Bispo 'qty' vezes
    for (int i = 0; i < qty; i++)
    {
        // Loop interno que executa uma vez por iteração do loop externo
        for (int j = 0; j < 1; j++)
        {
            // Imprime a direção do movimento do Bispo
            printf("Bispo: Cima direita\n");
        }
    }
}

// Função para mover a Torre
int moverTorre(int qty)
{
    // Imprime a direção do movimento da Torre
    printf("Torre: Direita\n");

    // Se a quantidade de movimentos for maior que 1, chama a função recursivamente
    if (qty > 1)
    {
        moverTorre(qty - 1);
    }
}

// Função para mover a Rainha
int moverRainha(int qty)
{
    // Imprime a direção do movimento da Rainha
    printf("Rainha: Esquerda\n");

    // Se a quantidade de movimentos for maior que 1, chama a função recursivamente
    if (qty > 1)
    {
        moverRainha(qty - 1);
    }
}

// Função para mover o Cavalo
int moverCavalo(int qty)
{
    // Imprime a direção do movimento do Cavalo
    printf("Cavalo: Cima, Direita\n");

    // Se a quantidade de movimentos for maior que 1, chama a função recursivamente
    if (qty > 1)
    {
        moverCavalo(qty - 1);
    }
}

// Função principal
int main()
{
    // Solicita ao usuário a quantidade de movimentos para o Bispo
    printf("Mova o bispo: ");
    int qtyBispo;
    scanf("%d", &qtyBispo);
    moverBispo(qtyBispo);
    printf("\n");

    // Solicita ao usuário a quantidade de movimentos para a Torre
    printf("Mova o Torre: ");
    int qtyTorre;
    scanf("%d", &qtyTorre);
    moverTorre(qtyTorre);
    printf("\n");

    // Solicita ao usuário a quantidade de movimentos para a Rainha
    printf("Mova o Rainha: ");
    int qtyRainha;
    scanf("%d", &qtyRainha);
    moverRainha(qtyRainha);
    printf("\n");

    // Solicita ao usuário a quantidade de movimentos para o Cavalo
    printf("Mova o Cavalo: ");
    int qtyCavalo;
    scanf("%d", &qtyCavalo);
    moverCavalo(qtyCavalo);
    printf("\n");
}