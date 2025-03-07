#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
         
    char Estado1 = 'A';
    char Codigo1[20] = "A01";
    char Cidade1[20] = "Bahia";
    int Populacao1 = 1414;
    float Area1 = 567.295;
    float PIB1 = 114.4;
    int pontosturisticos1 = 48;
    float densidadepopulacional1 = Populacao1/Area1;
    float PIBpercapita1 = PIB1/Populacao1;

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %.d milhões habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %1f bilhôes de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %2.f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %f reais\n", PIBpercapita1);

printf("\n");

    char Estado2 = 'B';
    char Codigo2[20] = "B02";
    char Cidade2[20] = "Amazonas";
    int Populacao2 = 3492;
    float Area2 = 1.571;
    float PIB2 = 43.19;
    int pontosturisticos2 = 27;
    float densidadepopulacional2 = Populacao2/Area2;
    float PIBpercapita2 = PIB2/Populacao2;

    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d milhões habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %1f bilhôes de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %2.f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %f reais\n", PIBpercapita2);

    printf("\n");

    printf("Comparação das cartas\n");

    printf("\n");




    printf("População: carta %d venceu\n", (Populacao1 > Populacao2));
    printf("Área: carta %d venceu\n", (Area1 > Area2));
    printf("PIB: carta %d venceu\n", (PIB1 > PIB2));
    printf("Pontos Turísticos: carta %d venceu\n", (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: carta %d venceu\n", (densidadepopulacional1 < densidadepopulacional2));
    printf("Pib per Capita: carta %d venceu\n", (PIBpercapita1 > PIBpercapita2));

    float superpoder1;
    float superpoder2;

    superpoder1 = (Populacao1 + Area1 + PIB1 + pontosturisticos1 + densidadepopulacional1 + PIBpercapita1);
    superpoder2 = (Populacao2 + Area2 + PIB2 + pontosturisticos2 + densidadepopulacional2 + PIBpercapita2);

    printf("Super poder: carta %d\n", (superpoder1 > superpoder2));



    return 0;
}
