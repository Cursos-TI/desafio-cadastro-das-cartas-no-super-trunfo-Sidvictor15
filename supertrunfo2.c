#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    printf("Carta 1\n");
         
    char Estado1 = 'A';
    char Codigo1[20] = "A01";
    char Cidade1[20] = "São Paulo";
    int Populacao1 = 12325;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int pontosturisticos1 = 50;
    float densidadepopulacional1 = Populacao1/Area1;
    float PIBpercapita1 = PIB1/Populacao1;

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %.d milhões habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %f bilhôes de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %2.f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %f reais\n", PIBpercapita1);

printf("\n");

printf("Carta 2\n");

    char Estado2 = 'B';
    char Codigo2[20] = "B02";
    char Cidade2[20] = "Rio de Janeiro";
    int Populacao2 = 6748;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30 ;
    float densidadepopulacional2 = Populacao2/Area2;
    float PIBpercapita2 = PIB2/Populacao2;

    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d milhões habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %1f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %2.f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %f reais\n", PIBpercapita2);

int escolha1;
int escolha2;

    printf("BEM VINDO AO JOGO\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade populacional\n");
    printf("6- PIB per capita\n");


    printf("Escolha a primeira comparação\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("População\n");
        escolha1 = Populacao1 > Populacao2 ? 1:0;

        break;

    case 2:

    printf("Área\n");
    escolha1 = Area1 > Area2 ? 1:0;

    break;

    case 3:
    printf("PIB\n");
    escolha1 = PIB1 > PIB2 ? 1:0;

    break;
case 4:
printf("Pontos Turísticos\n");
escolha1 = pontosturisticos1 > pontosturisticos2 ? 1:0;

break;

case 5:
printf("Densidade Populacional\n");
escolha1= densidadepopulacional1 < densidadepopulacional2 ? 1:0;

break;

case 6:
printf("Pib Per Capita\n");
escolha1 = PIBpercapita1 > PIBpercapita2 ? 1:0;

    
    default:
    printf("Inválido\n");
        break;
    }




    printf("Escolha o segundo tributo\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
    {
        printf("Mesmas escolhas\n"); 
    }else{
    switch (escolha2)
    {
    case 1:
        printf("População\n");
        escolha2 = Populacao1 > Populacao2 ? 1:0;

        break;

    case 2:

    printf("Área\n");
    escolha2 = Area1 > Area2 ? 1:0;

    break;

    case 3:
    printf("PIB\n");
    escolha2 = PIB1 > PIB2 ? 1:0;

    break;
case 4:
printf("Pontos Turísticos\n");
escolha2 = pontosturisticos1 > pontosturisticos2 ? 1:0;

break;

case 5:
printf("Densidade Populacional\n");
escolha2= densidadepopulacional1 < densidadepopulacional2 ? 1:0;

break;

case 6:
printf("Pib Per Capita\n");
escolha2 = PIBpercapita1 > PIBpercapita2 ? 1:0;

    
    default:
    printf("Inválido\n");
        break;
    }

    }


    if ((escolha1 == 1) && (escolha2 ==1))
    {
       printf("Você ganhou!\n");
    }else if(escolha1 != escolha2){
     printf("Empate!\n");
    }else{
        printf("Você perdeu!\n");
    }
    


    




    




    

























}