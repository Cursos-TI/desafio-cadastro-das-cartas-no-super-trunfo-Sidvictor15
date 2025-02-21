#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char Estado;
    char Codigo[];
    char Cidade[];
    int População;
    float Área;
    float PIB;
    int Pontos;

    printf("Digite o Estado: \n");
    scanf("c", &Estado);

    printf("Digite o codigo: \n");
    scanf("s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("s", &Cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &População);

    printf("Digite a area: \n");
    scanf("f", &Área);

    printf("Digite o PIB: \n");
    scanf("%e", &PIB);

    printf("Digite o numero de Pontos Turísticos: \n");
    scanf("%d", &Pontos);


    return 0;
}
