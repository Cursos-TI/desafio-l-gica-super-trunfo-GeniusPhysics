#include <stdio.h>

int main() {
    //  Definição das variaveis da primeira carta
    char estado_carta1;
    char codigo_carta1[3];
    char cidade_carta1[30];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int numero_pontos_turisticos_carta1;
    
    //  Definição das variaveis da segunda carta
    char estado_carta2;
    char codigo_carta2[3];
    char cidade_carta2[30];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int numero_pontos_turisticos_carta2;

     // Introdução (já fornecida antes)
    printf("===========================================\n");
    printf("         SUPER TRUNFO - CIDADES BRASIL\n");
    printf("===========================================\n");
    printf("Bem-vindo(a) ao cadastro de cartas do jogo!\n\n");
    printf("Neste sistema, você irá registrar as informações\n");
    printf("de duas cidades brasileiras para compor as cartas\n");
    printf("do nosso Super Trunfo geográfico 🌍🃏\n\n");
    printf("Basta preencher os dados solicitados abaixo 👇\n");
    
    // Cadastro da primeira carta
    printf("---------- CARTA 1 ----------\n");
    printf("Vamos começar com a primeira cidade.\n");
    
    printf("Informe a letra do Estado (de 'A' a 'H'): ");
    scanf("%c", &estado_carta1);

    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", &codigo_carta1);

    // limpa o caracter \n do input anterior. Se não utilizado gera um problema de pular etapas das perguntas
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade_carta1, 30, stdin);
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta1);
    
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area_carta1);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_carta1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_carta1);
    printf("-----------------------------\n\n");


    // Cadastro da segunda carta
    printf("Agora, vamos cadastrar a segunda carta.\n");
    printf("---------- CARTA 2 ----------\n");

    getchar();
    printf("Informe a letra do Estado (de 'A' a 'H'):");
    scanf("%c", &estado_carta2);
    
    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", &codigo_carta2);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade_carta2, 30, stdin);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area_carta2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_carta2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_carta2);

    printf("-----------------------------\n\n");

    printf("Cadastro concluído com sucesso! ✅\n\n");
    printf("A seguir, serão exibidas as informações das cartas cadastradas:\n\n");

    printf("Carta 1: \n");
    printf("    Estado: %d \n", estado_carta1);
    printf("    Código: %s \n", codigo_carta1);
    printf("    Nome da Cidade: %s \n", cidade_carta1);
    printf("    População: %d \n", populacao_carta1);
    printf("    Área: %d km² \n", area_carta1);
    printf("    PIB: %d bilhões de reais \n", pib_carta1);
    printf("    Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta1);
    
    printf("Carta 2: \n");
    printf("    Estado: %d \n", estado_carta2);
    printf("    Código: %s \n", codigo_carta2);
    printf("    Nome da Cidade: %s \n", cidade_carta2);
    printf("    População: %d \n", populacao_carta2);
    printf("    Área: %d km² \n", area_carta2);
    printf("    PIB: %d bilhões de reais \n", pib_carta2);
    printf("    Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta2);
    


    return 0;
}