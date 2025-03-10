#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    // | Desafio nivel novato
    // As variaveis teram o prefixo c1 para carta Um e c2 para carta 2
    char c1_estado, c2_estado;// Letra inicial que representa o estado
    char c1_codigo[4], c2_codigo[4]; // Código da cidade inicado por uma letra e dois numero de 01 a 99
    int c1_pop, c2_pop; // Populção da cidade
    char c1_nome_da_cidade[50],c2_nome_da_cidade[50]; // Nome da cidade
    float c1_area, c2_area; // Area em Km² da cidade
    float c1_pib , c2_pib; // Produto interno bruto da cidade
    int c1_ponto_turistico, c2_ponto_turistico;
    // variaveis para o nivel avançado
    float c1_densidade_pop, c2_densidade_pop; // Densidade Populacional
    float c1_pib_cap, c2_pib_cap; // PIB per Capita  
    // variaveis para o nivel Mestre
    double c1_superpoder, c2_superpoder;

    // comparações
    // todas variaveis que iram guardar os resultados booleanos
    short int comp_pop, comp_area,comp_pib,comp_pt,comp_den, comp_pibcap, comp_super, comp_final;
    //Aqui são algumas implementações extras que acho que melhoram de certa forma o jogo
    short int c1_pontuacao , c2_pontuacao;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Mensagem de boas vindas
    printf("Sejá bem vindo(a), vamos começar o Super Trunfo!!!\n");
    printf("Vamos começar cadrastando a primeira carta...\n\n");
    
    printf("----------------------------------------------\n");
    printf("|Carta 1|\n");

    printf("|Em qual estado a cidade é situada, lembrando responda com a inicial do estado: ");
    scanf(" %c",&c1_estado);

    printf("|Qual código da sua cidade, lembrando inicial do estado\n|mais o código de dois digitos: ");
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

    printf("|Em qual estado a cidade é situada, lembrando responda com a inicial do estado: ");
    scanf(" %c",&c2_estado);

    printf("|Qual código da sua cidade, lembrando inicial do estado\n|mais o código de dois digitos: ");
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

    // || Nivel Avançado
    //Calculo Das Cartas
    //----------------------------------
    // Densidade Populacional
    c1_densidade_pop = (float) (c1_pop / c1_area);
    c2_densidade_pop = (float) (c2_pop / c2_area);
    // Pib per Capita
    c1_pib_cap = (float)((c1_pib*1000000000)/c1_pop);
    c2_pib_cap = (float)((c2_pib*1000000000)/c2_pop);
    //Como aqui cada numero no pib está na casa dos bilhoes deve se mutipilcar por um bilhão

    // ||| Nivel mestre
    // Opinião: Professor acredito que uma forma que seria mais bonita de formata quem venceu a partida seria fazendo o inverso, 
    // da seguinte forma quanto for falso ou seja (0) a carta um vence o motivo disso é que se somarmos 1 nesse resultado podemos
    // formatar o vencedor de forma correta pois se o dois ganha sairia (1) somando mais 1 ficaria 2 o mesmo numero da carta ou seja 
    // em um printf("Carta %d venceu", variavel).
    //Super poder 
    c1_superpoder = (c1_pib+c1_area+c1_ponto_turistico+c1_pop+c1_pib_cap+(1/c1_densidade_pop));
    c2_superpoder = (c2_pib+c2_area+c2_ponto_turistico+c2_pop+c2_pib_cap+(1/c2_densidade_pop));

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
    printf("|Densidade Populacional: %.2fhab/km² \n",c1_densidade_pop);
    printf("|PIB per Capita:: %.2f reais\n",c1_pib_cap);
    printf("|Super Poder: %.3f  \n",c1_superpoder);
    printf("----------------------------------------------\n\n");

    printf("----------------------------------------------\n");
    printf("|Carta 2|\n");
    printf("|Estado: [%c] \n",c2_estado);
    printf("|Código da   cidade: |%s| \n",c2_codigo);
    printf("|População: %d \n",c2_pop);
    printf("|Nome da cidade: %s \n",c2_nome_da_cidade);
    printf("|Area: %.2fkm² \n",c2_area);
    printf("|PIB: %.2f bilhões de reais\n",c2_pib);
    printf("|Pontos turisticos na cidade: %d\n",c2_ponto_turistico);
    printf("|Densidade Populacional: %.2fhab/km² \n",c2_densidade_pop);
    printf("|PIB per Capita:: %.2f reais\n",c2_pib_cap);
    printf("|Super Poder: %.3f  \n",c2_superpoder);
    printf("----------------------------------------------\n\n");


    // Aqui ficará o calculo das comparações --------

    comp_pop= c1_pop < c2_pop;
    comp_area= c1_area < c2_area;
    comp_pib= c1_pib < c2_pib;
    comp_pt= c1_ponto_turistico <  c2_ponto_turistico;
    comp_den=c1_densidade_pop > c2_densidade_pop; // Quem tem maior vai perder, então a gente inverte
    comp_pibcap= c1_pib_cap < c2_pib_cap;
    comp_super= c1_superpoder< c2_superpoder;

    // Vamos agora fazer a pontuação
    int soma_pontos = comp_pop++ + comp_area++ + comp_pib++ + comp_pt++ + comp_den++ + comp_pibcap++ + comp_super++;
    // o motivo do pós incremento é para já formatar para na saida está formatado como carta 1 ou 2 não carta  0 ou 1

    c1_pontuacao = 7 - soma_pontos; // A logica aqui é simples quanto mais um acertar menor é a soma de pontos já que a cada 0 é um ponto dele
    c2_pontuacao = 0 + soma_pontos; // Sei que não é nescessario somar com 0 mas ficou legal o contraste com o de cima 
    
    comp_final=  c1_pontuacao<c2_pontuacao;
    comp_final++;


    //Saida das comparações
    printf("----------------------------------------------\n");
    printf("|Comparação|\n");
    printf("|Cidades:  %s (carta 1) X %s (carta 2)\n",c1_nome_da_cidade,c2_nome_da_cidade);
    printf("|População:| %d X %d | Vencendor Carta %d\n",c1_pop, c2_pop , comp_pop);
    printf("|Area: |%.2fkm² X %.2fkm²| Vencendor Carta %d \n",c1_area, c2_area, comp_area);
    printf("|PIB: |R$%.2fB X R$%.2fB| Vencendor Carta %d \n",c1_pib, c2_pib, comp_pib);
    printf("|Pontos turisticos: |%d X %d| Vencendor Carta %d \n",c1_ponto_turistico,  c2_ponto_turistico, comp_pt);
    printf("|Densidade Populacional: |%.2fhab/km² X %.2fhab/km²| Vencendor Carta %d\n",c1_densidade_pop, c2_densidade_pop, comp_den);
    printf("|PIB per Capita:: |R$%.2f X R$%.2f| Vencendor Carta %d \n",c1_pib_cap,c2_pib_cap,comp_pibcap);
    printf("|Super Poder: |%.3f X %.3f| Vencendor Carta %d  \n",c1_superpoder,c2_superpoder,comp_super);
    printf("----------------------------------------------\n\n");


    printf("----------------------------------------------\n");
    printf("|A Carta 1 fez %d pontos e a Carta 2 fez %d pontos o vencedor foi.....|\n",c1_pontuacao,c2_pontuacao);
    printf("| - Carta %d - Parabens Você venceu essa rodada do Super trunfo.\n",comp_final);
    printf("----------------------------------------------\n\n\n");
    printf("-\n");

    return 0;
}
