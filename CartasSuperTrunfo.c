#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    // Comece digitando as informações solicitadas para a primeira carta
    // Para a letra, escolha uma de "A" a "H". O código consiste nessa letra seguida por um numero de 01 a 04

    printf ("Digite a letra do estado: \n");
    scanf (" %c", &estado1);

    printf ("Digite o codigo do estado: \n");
    scanf ("%s", codigo1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &cidade1);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a área (KM²) da cidade: \n");
    scanf ("%f", &area1);

    printf ("Digite o Produto Interno Bruto da cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf ("%d", &turismo1);

    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n",populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos turísticos: %d\n\n", turismo1);


    // Agora, digite as informações para a segunda carta

    printf ("Letra do estado: \n");
    scanf (" %c", &estado2);

    printf ("Código do estado: \n");
    scanf ("%s", &codigo2);

    printf ("Nome da cidade: \n");
    scanf ("%s", &cidade2);

    printf ("População da cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Área da cidade: \n");
    scanf ("%f", &area2);

    printf ("PIB da cidade: \n");
    scanf ("%f", &pib2);

    printf ("Quantidade de pontos turisticos na cidade: \n");
    scanf ("%d", &turismo2);

    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos turísticos: %d\n\n", turismo2);
    
    return 0;
}
