#include <stdio.h>


int main() {
    char inicial1, inicial2;
    char codigo1[5], codigo2[5];
    char pais1[20], pais2[20];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;
    int opcao;
    

    printf ("Comece digitando as informações solicitadas para a primeira carta \n");
    printf ("Para a letra, escolha uma de 'A' a 'H'. O código consiste nessa letra seguida por um numero de 01 a 04 \n\n"); 

    printf ("Digite a letra do país: \n");
    scanf (" %c", &inicial1);

    printf ("Digite o codigo do país: \n");
    scanf ("%s", codigo1);

    printf ("Digite o nome do país: \n");
    scanf ("%s", &pais1);

    printf ("Digite a população do país: \n");
    scanf ("%u", &populacao1);

    printf ("Digite a área (KM²) do país: \n");
    scanf ("%f", &area1);

    printf ("Digite o Produto Interno Bruto do país: \n");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turisticos no país: \n");
    scanf ("%d", &turismo1);

    densidade1 = (float) populacao1 / area1;
    percapita1 =  pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) turismo1 + percapita1 - densidade1;
    // float converte os inteiros populacao1 e turismo1 em pontos flutuantes

    printf ("Carta 1: \n");
    printf ("Letra: %c\n", inicial1);
    printf ("Código: %s\n", codigo1);
    printf ("País: %s\n", pais1);
    printf ("População: %u\n",populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos turísticos: %d\n", turismo1);
    printf ("Densidade populacional: %.2f\n", densidade1);
    printf ("PIB per Capita: %.2f\n", percapita1);
    printf ("Super Poder: %.2f\n\n", superPoder1);


    printf ("Agora, digite as informações para a segunda carta \n\n");

    printf ("Letra do país: \n");
    scanf (" %c", &inicial2);

    printf ("Código do país: \n");
    scanf ("%s", &codigo2);

    printf ("Nome do país: \n");
    scanf ("%s", &pais2);

    printf ("População do país: \n");
    scanf ("%u", &populacao2);

    printf ("Área do país: \n");
    scanf ("%f", &area2);

    printf ("PIB do país: \n");
    scanf ("%f", &pib2);

    printf ("Quantidade de pontos turisticos no país: \n");
    scanf ("%d", &turismo2);


    densidade2 = (float) populacao2 / area2;
    percapita2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) turismo2 + percapita2 - densidade2;


    printf ("Carta 2: \n");
    printf ("Letra: %c\n", inicial2);
    printf ("Código: %s\n", codigo2);
    printf ("País: %s\n", pais2);
    printf ("População: %u\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos turísticos: %d\n", turismo2);
    printf ("Densidade populacional: %.2f\n", densidade2);
    printf ("PIB per Capita: %.2f\n", percapita2);
    printf ("Super Poder: %.2f\n\n", superPoder2);


    printf ("***Comparação das cartas***\n");
    printf ("Escolha um número, de 1 a 6, para ver a comparação das cartas\n");
    printf ("1 - Nome, 2 - População, 3 - Área, 4 - PIB, 5 - Pontos turísticos, 6 - Densidade demográfica\n");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
        printf ("Temos os países: %s e %s\n", pais1, pais2);
        break;
        case 2:
        if (populacao1 > populacao2) {
            printf ("População: %u vs. %u - Carta 1 venceu!\n", populacao1, populacao2);
        }else if ( populacao2 > populacao1) {
            printf ("População: %u vs. %u - Carta 2 venceu!\n", populacao1, populacao2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
        case 3:
        if (area1 > area2) {
            printf ("Área: %.2f vs. %.2f - Carta 1 venceu!\n", area1, area2);
        } else if (area2 > area1) {
            printf ("Área: %.2f vs. %.2f - Carta 2 venceu!\n", area1, area2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
        case 4:
        if (pib1 > pib2) {
            printf ("PIB: %.2f vs. %.2f - Carta 1 venceu!\n", pib1, pib2);
        } else if (pib2 > pib1) {
            printf ("PIB: %.2f vs. %.2f - Carta 2 venceu!\n", pib1, pib2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
        case 5:
        if (turismo1 > turismo2) {
            printf ("Pontos turísticos: %d vs. %d - Carta 1 venceu!\n", turismo1, turismo2);
        }else if ( turismo2 > turismo1) {
            printf ("Pontos turísticos: %d vs. %d - Carta 2 venceu!\n", turismo1, turismo2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;
        case 6:
        if (densidade1 < densidade2) {
            printf ("Densidade demográfica: %.2f vs. %.2f - Carta 1 venceu!\n", densidade1, densidade2);
        } else if (densidade2 < densidade1) {
            printf ("Densidade demográfica: %.2f vs. %.2f - Carta 2 venceu!\n", densidade1, densidade2);
        } else {
            printf ("Houve um empate!\n");
        }
        break;

    }

    

    
    
}