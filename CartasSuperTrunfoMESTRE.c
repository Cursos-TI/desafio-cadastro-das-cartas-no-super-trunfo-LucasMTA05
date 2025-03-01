#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[15], cidade2[15];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    printf ("Comece digitando as informações solicitadas para a primeira carta \n");
    printf ("Para a letra, escolha uma de 'A' a 'H'. O código consiste nessa letra seguida por um numero de 01 a 04 \n\n"); 

    printf ("Digite a letra do estado: \n");
    scanf (" %c", &estado1);

    printf ("Digite o codigo do estado: \n");
    scanf ("%s", codigo1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &cidade1);

    printf ("Digite a população da cidade: \n");
    scanf ("%u", &populacao1);

    printf ("Digite a área (KM²) da cidade: \n");
    scanf ("%f", &area1);

    printf ("Digite o Produto Interno Bruto da cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf ("%d", &turismo1);

    densidade1 = (float) populacao1 / area1;
    percapita1 =  pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) turismo1 + percapita1 - densidade1;
    // float converte os inteiros populacao1 e turismo1 em pontos flutuantes

    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %u\n",populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos turísticos: %d\n", turismo1);
    printf ("Densidade populacional: %.2f\n", densidade1);
    printf ("PIB per Capita: %.2f\n", percapita1);
    printf ("Super Poder: %.2f\n\n", superPoder1);


    printf ("Agora, digite as informações para a segunda carta \n\n");

    printf ("Letra do estado: \n");
    scanf (" %c", &estado2);

    printf ("Código do estado: \n");
    scanf ("%s", &codigo2);

    printf ("Nome da cidade: \n");
    scanf ("%s", &cidade2);

    printf ("População da cidade: \n");
    scanf ("%u", &populacao2);

    printf ("Área da cidade: \n");
    scanf ("%f", &area2);

    printf ("PIB da cidade: \n");
    scanf ("%f", &pib2);

    printf ("Quantidade de pontos turisticos na cidade: \n");
    scanf ("%d", &turismo2);


    densidade2 = (float) populacao2 / area2;
    percapita2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) turismo2 + percapita2 - densidade2;


    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %u\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos turísticos: %d\n", turismo2);
    printf ("Densidade populacional: %.2f\n", densidade2);
    printf ("PIB per Capita: %.2f\n", percapita2);
    printf ("Super Poder: %.2f\n\n", superPoder2);


    printf ("***Comparação das cartas***\n");

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = turismo1 > turismo2;
    resultado5 = densidade1 < densidade2;
    resultado6 = percapita1 > percapita2;
    resultado7 = superPoder1 > superPoder2;

    printf ("População: %d\n", resultado1);
    printf ("Área: %d\n", resultado2);
    printf ("PIB: %d\n", resultado3);
    printf ("Pontos turísticos: %d\n", resultado4);
    printf ("Densidade populacional: %d\n", resultado5);
    printf ("PIB Per Capita: %d\n", resultado6);
    printf ("Super Poder: %d\n\n", resultado7);

    printf ("Se o resultado for 1, a carta 1 venceu; se for 0, a carta 2 venceu\n");

    
    return 0;
}