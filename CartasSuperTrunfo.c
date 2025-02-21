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


    

    return 0;
}
