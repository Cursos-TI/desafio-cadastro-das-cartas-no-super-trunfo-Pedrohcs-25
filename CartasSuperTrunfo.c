#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    // Desafio nivel novato
    // As variaveis teram o prefixo c1 para carta Um e c2 para carta 2
    char c1_estado, c2_estado;// Letra inicial que representa o estado
    char c1_codigo[4], c2_codigo[4]; // Código da cidade inicado por uma letra e dois numero de 01 a 99
    int c1_pop, c2_pop; // Populção da cidade
    char c1_nome_da_cidade[50],c2_nome_da_cidade[50]; // Nome da cidade
    float c1_area, c2_area; // Area em Km² da cidade
    float c1_pib , c2_pib; // Produto interno bruto da cidade
    int c1_ponto_turistico, c2_ponto_turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Mensagem de boas vindas
    printf("Sejá bem vindo(a), vamos começar o Super Trunfo!!!\n");
    printf("Vamos começar cadrastando a primeira carta...\n\n");
    
    printf("----------------------------------------------\n");
    printf("|Carta 1|\n");

    printf("|Em qual Estado a cidade é situada, lembrando responda com a inicial do Estado: ");
    scanf(" %c",&c1_estado);

    printf("|Qual código da sua cidade, lembrando inicial do Estado\n|mais o código numerio de dois digitos: ");
    scanf("%s", c1_codigo);

    printf("|Quanto é a população da cidade: ");
    scanf("%d",&c1_pop);

    printf("|Qual será nome da cidade: ");
    scanf("%s", c1_nome_da_cidade);

    printf("|Qual é a area em Km² da cidade: ");
    scanf("%f", &c1_area);

    printf("|Qual o PIB da cidade: ");
    scanf("%f", &c1_pib);

    printf("|Quantos pontos turisticos tem na cidade: ");
    scanf("%d", &c1_ponto_turistico);
    printf("----------------------------------------------\n\n");

    printf("Agora vamos preencher a segunda carta...\n\n");

    printf("----------------------------------------------\n");
    printf("|Carta 2|\n");

    printf("|Em qual Estado a cidade é situada, lembrando responda com a inicial do Estado: ");
    scanf(" %c",&c2_estado);

    printf("|Qual código da sua cidade, lembrando inicial do Estado\n|mais o código numerio de dois digitos: ");
    scanf("%s", c2_codigo);

    printf("|Quanto é a população da cidade: ");
    scanf("%d",&c2_pop);

    printf("|Qual será nome da cidade: ");
    scanf("%s", c2_nome_da_cidade);

    printf("|Qual é a area em Km² da cidade: ");
    scanf("%f", &c2_area);

    printf("|Qual o PIB da cidade: ");
    scanf("%f", &c2_pib);

    printf("|Quantos pontos turisticos tem na cidade: ");
    scanf("%d", &c2_ponto_turistico);
    printf("----------------------------------------------\n\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cartas cadrastradas: 2 \n\n");

    printf("----------------------------------------------\n");
    printf("|Carta 1|\n");
    printf("|Estado: [%c] \n",c1_estado);
    printf("|Código da cidade: |%s| \n",c1_codigo);
    printf("|População: %d \n",c1_pop);
    printf("|Nome da cidade: %s \n",c1_nome_da_cidade);
    printf("|Area: %.2fkm² \n",c1_area);
    printf("|PIB: %.2f bilhões de reais\n",c1_pib);
    printf("|Pontos turisticos na cidade: %d\n",c1_ponto_turistico);
    printf("----------------------------------------------\n\n");

    printf("----------------------------------------------\n");
    printf("|Carta 2|\n");
    printf("|Estado: [%c] \n",c2_estado);
    printf("|Código da cidade: |%s| \n",c2_codigo);
    printf("|População: %d \n",c2_pop);
    printf("|Nome da cidade: %s \n",c2_nome_da_cidade);
    printf("|Area: %.2fkm² \n",c2_area);
    printf("|PIB: %.2f bilhões de reais\n",c2_pib);
    printf("|Pontos turisticos na cidade: %d\n",c2_ponto_turistico);
    printf("----------------------------------------------\n\n");


    return 0;
}
