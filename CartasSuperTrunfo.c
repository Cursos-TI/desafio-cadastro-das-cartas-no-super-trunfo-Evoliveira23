#include <stdio.h>

int main(){

    char estado;           //Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo[4];        // Ex: A01, B03)
    char nomeCidade[50];   //O nome da cidade.
    int populacao;         //O número de habitantes da cidade.
    float area;            //A área da cidade em quilômetros quadrados.
    float pib;             //O Produto Interno Bruto da cidade.
    int pontosTuristicos;  //A quantidade de pontos turísticos na cidade.

    // Inserção dos dados Carta 1
    printf("Cadastro Carta 1 \n");
    printf("Digite o Estado (Utilize uma letra de A a H): ");
    scanf(" %c", &estado);
    printf("Digite o código da Carta (Ex: A01, B03): ");
    scanf(" %s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Lê até o enter (com espaço antes do %)
    printf("Digite a População (Número de habitantes da cidade, digite somente números): ");
    scanf(" %d", &populacao);
    printf("Digite a Área da Cidade em quilômetros quadrados (Digite somente números): ");
    scanf(" %f", &area);
    printf("Digite o Produto Interno Bruto da cidade (Digite somente números): ");
    scanf(" %f", &pib);
    printf("Digite a quantidade de pontos turísticos na cidade (Digite somente números): ");
    scanf(" %i", &pontosTuristicos);

    // Exibição dos dados Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Inserção dos dados Carta 2
    printf("\nCadastro Carta 2 \n");
    printf("Digite o Estado (Utilize uma letra de A a H): ");
    scanf(" %c", &estado);
    printf("Digite o código da Carta (Ex: A01, B03): ");
    scanf(" %s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Lê até o enter (com espaço antes do %)
    printf("Digite a População (Número de habitantes da cidade, digite somente números): ");
    scanf(" %d", &populacao);
    printf("Digite a Área da Cidade em quilômetros quadrados (Digite somente números): ");
    scanf(" %f", &area);
    printf("Digite o Produto Interno Bruto da cidade (Digite somente números): ");
    scanf(" %f", &pib);
    printf("Digite a quantidade de pontos turísticos na cidade (Digite somente números): ");
    scanf(" %i", &pontosTuristicos);

    // Exibição dos dados Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos);

return 0;
}
    