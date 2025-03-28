#include <stdio.h>


int main()
{

    char estado1, estado2[15];
    char codigoDaCarta1, codigoDaCarta2[20];
    char nomeDaCidade1, nomeDaCidade2[20];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float PIB1, PIB2, areakm1, areakm2;

    printf("\n***SUPER TRUNFO***\n");

    printf("\nCarta N1°\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código da carta em sequência:\n");
    scanf("%s", &codigoDaCarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\nkm²");
    scanf("%f", &areakm1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%i", &pontoTuristico1);

    printf("\nCarta N2°\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);
    
    printf("Digite o código da carta em sequência:\n");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área:\nkm²");
    scanf("%f", &areakm2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%i", &pontoTuristico2);

    return 0;
}
