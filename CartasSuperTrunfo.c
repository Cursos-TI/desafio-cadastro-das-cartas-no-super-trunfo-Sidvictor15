#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
         
    char Estado1 = 'A';
    char Codigo1[20] = "A01";
    char Cidade1[20] = "Bahia";
    int Populacao1 = 12325000;
    float Area1 = 567.295;
    float PIB1 = 114.4;
    int pontosturisticos1 = 48;

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d mil habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %1f bilhôes de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    


    char Estado2 = 'B';
    char Codigo2[20] = "B02";
    char Cidade2[20] = "Amazonas";
    int Populacao2 = 3.492;
    float Area2 = 1.571;
    float PIB2 = 43.19;
    int pontosturisticos2 = 27;

    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d mil habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %1f bilhôes de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;
}
