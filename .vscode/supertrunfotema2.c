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

    
int escolha;

    printf("Comparação entre cartas\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Números de Pontos Turísticos\n");
    printf("5.Densidade Demográfica\n");
    printf("Escolha a sua comparação\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
     if(Populacao1 > Populacao2){
        printf("Cidade 1 venceu");
     }else if (Populacao1 < Populacao2){
        printf("Cidade 2 venceu");
     }else{
        printf("Empate");
     }

        break;

        case 2:
     if(Area1 > Area2){
        printf("Cidade 1 venceu");
     }else if (Area1 < Area2){
        printf("Cidade 2 venceu");
     }else{
        printf("Empate");
     }

     break;

     case 3:
     if(PIB1 > PIB2){
        printf("Cidade 1 venceu");
     }else if (PIB1 < PIB2){
        printf("Cidade 2 venceu");
     }else{
        printf("Empate");
     }
     break;

     case 4:
     if(pontosturisticos1 > pontosturisticos2){
        printf("Cidade 1 venceu");
     }else if (pontosturisticos1 < pontosturisticos2){
        printf("Cidade 2 venceu");
     }else{
        printf("Empate");
     }
     break;

     case 5:
     if(densidadepopulacional1 > densidadepopulacional2){
        printf("Cidade 2 venceu");
     }else if (densidadepopulacional1 < densidadepopulacional2){
        printf("Cidade 1 venceu");
     }else{
        printf("Empate");
     }
     break;

    default:
    printf("Opção inválida");
        break;








    }




    return 0;
}
