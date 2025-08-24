#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado_carta1, estado_carta2;
    char codigo_carta1[4], codigo_carta2[4];
    char cidade_carta1[30], cidade_carta2[30];
    unsigned long int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    int numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;
    float densidade_populacional_carta1, densidade_populacional_carta2;
    float pib_per_capita_carta1, pib_per_capita_carta2;
    float super_poder_carta1, super_poder_carta2;

    // Definição das variáveis de menu
    int atributo_escolhido;
    
    
    // Introdução
    printf("===========================================\n");
    printf("         SUPER TRUNFO - CIDADES BRASIL\n");
    printf("===========================================\n");
    printf("Bem-vindo(a) ao cadastro de cartas do jogo!\n\n");
    printf("Neste sistema, você irá registrar as informações\n");
    printf("de duas cidades brasileiras para compor as cartas\n");
    printf("do nosso Super Trunfo geográfico \n\n");
    printf("Basta preencher os dados solicitados abaixo \n");
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("---------- CARTA 1 ----------\n");
    printf("Vamos começar com a primeira cidade.\n");
    
    printf("Informe a letra do Estado (de 'A' a 'H'): ");
    scanf("%c", &estado_carta1);

    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", &codigo_carta1); 
    
    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", &cidade_carta1); // utilizar dessa forma permite limpar o buffer e aceitar nomes com espacos
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta1);
    
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area_carta1);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_carta1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &numero_pontos_turisticos_carta1); // espaço no inicio para limpar o buffer

    // conversão das variáveis para float para evitar problemas de arredondamento
    densidade_populacional_carta1 = (float) populacao_carta1 / area_carta1;
    // pib é coletado em bilhoes, entao precisa ser convertido para milhoes
    pib_per_capita_carta1 =  (float) pib_carta1  * 1000000000.0 /  populacao_carta1;
    super_poder_carta1 = (float) populacao_carta1 + area_carta1 + (float) pib_carta1 + numero_pontos_turisticos_carta1 + pib_per_capita_carta1 + 1 / densidade_populacional_carta1;

    printf("-----------------------------\n\n");

    
    printf("Agora, vamos cadastrar a segunda carta.\n");
    printf("---------- CARTA 2 ----------\n");

    printf("Informe a letra do Estado (de 'A' a 'H'):");
    scanf(" %c", &estado_carta2); // espaço no inicio para limpar o buffer
    
    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", &cidade_carta2); 

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area_carta2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_carta2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_carta2);

    densidade_populacional_carta2 = (float) populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (float) pib_carta2 * 1000000000.0 / populacao_carta2;
    super_poder_carta2 = (float) populacao_carta2 + area_carta2 + (float) pib_carta2 + numero_pontos_turisticos_carta2 + pib_per_capita_carta2 + 1 / densidade_populacional_carta2;

    printf("-----------------------------\n\n");

    printf("Cadastro concluído com sucesso! ✅\n\n");
    

    /* Desafio Iniciante
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("Comparação de cartas (Atributo: Pib per Capita):\n");
    printf("Carta 1 - %s (%c): %.2f \n", cidade_carta1, estado_carta1, pib_per_capita_carta1);
    printf("Carta 2 - %s (%c): %.2f \n", cidade_carta2, estado_carta2, pib_per_capita_carta2);
    
    if (pib_per_capita_carta1 > pib_per_capita_carta2) {
        printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
    } else {
        printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
    }
    */


    // Desafio Intermediário
    // Menu Interativo:
    // Desenvolva um menu interativo para o usuário escolher o atributo para comparação.
    // Utilize estruturas de decisão switch para permitir ao usuário escolher o atributo.

    printf("Escolha o atributo para comparação: \n");
    printf("1. Nome da Cidade (Exibe informações das cartas) \n");
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. Número de Pontos Turísticos \n");
    printf("6. Densidade Populacional \n");
    scanf("%d", &atributo_escolhido);
    

    printf("Cidades disponiveis:\n");
    printf("Carta 1. %s\n", cidade_carta1);
    printf("Carta 2. %s\n", cidade_carta2);

    

    switch (atributo_escolhido)
    {
    case 1:
        printf("A seguir, serão exibidas as informações das cartas cadastradas:\n\n");

        printf("Carta 1: \n");
        printf("    Estado: %c \n", estado_carta1);
        printf("    Código: %s \n", codigo_carta1);
        printf("    Nome da Cidade: %s \n", cidade_carta1);
        printf("    População: %d \n", populacao_carta1);
        printf("    Área: %.2f km² \n", area_carta1);
        printf("    PIB: %.2f bilhões de reais \n", pib_carta1);
        printf("    Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta1);
        printf("    Densidade Populacional: %.2f \n", densidade_populacional_carta1);
        printf("    PIB per Capita: %.2f \n", pib_per_capita_carta1);
        
        
        printf("Carta 2: \n");
        printf("    Estado: %c \n", estado_carta2);
        printf("    Código: %s \n", codigo_carta2);
        printf("    Nome da Cidade: %s \n", cidade_carta2);
        printf("    População: %d \n", populacao_carta2);
        printf("    Área: %.2f km² \n", area_carta2);
        printf("    PIB: %.2f bilhões de reais \n", pib_carta2);
        printf("    Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta2);
        printf("    Densidade Populacional: %.2f \n", densidade_populacional_carta2);
        printf("    PIB per Capita: %.2f \n", pib_per_capita_carta2);
        break;
    
    case 2:
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%c): %d \n", cidade_carta1, estado_carta1, populacao_carta1);
        printf("Carta 2 - %s (%c): %d \n", cidade_carta2, estado_carta2, populacao_carta2);
        if (populacao_carta1 > populacao_carta2) {
            printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
        } else if (populacao_carta1 < populacao_carta2) {
            printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
        } else {
            printf("Resultado: Empate\n");
        }
        break;

    case 3:
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%c): %.2f km² \n", cidade_carta1, estado_carta1, area_carta1);
        printf("Carta 2 - %s (%c): %.2f km² \n", cidade_carta2, estado_carta2, area_carta2);
        if (area_carta1 > area_carta2) {
            printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
        } else if (area_carta1 < area_carta2) {
            printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
        } else {
            printf("Resultado: Empate\n");
        }
        break;

    case 4:
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%c): %.2f bilhões de reais \n", cidade_carta1, estado_carta1, pib_carta1);
        printf("Carta 2 - %s (%c): %.2f bilhões de reais \n", cidade_carta2, estado_carta2, pib_carta2);
        if (pib_carta1 > pib_carta2) {
            printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
        } else if (pib_carta1 < pib_carta2) {
            printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
        } else {
            printf("Resultado: Empate\n");
        }
        break;

    case 5:
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n");
        printf("Carta 1 - %s (%c): %d \n", cidade_carta1, estado_carta1, numero_pontos_turisticos_carta1);
        printf("Carta 2 - %s (%c): %d \n", cidade_carta2, estado_carta2, numero_pontos_turisticos_carta2);
        if (numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2) {
            printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
        } else if (numero_pontos_turisticos_carta1 < numero_pontos_turisticos_carta2) {
            printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
        } else {
            printf("Resultado: Empate\n");
        }
        break;

    case 6:
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%c): %.2f \n", cidade_carta1, estado_carta1, densidade_populacional_carta1);
        printf("Carta 2 - %s (%c): %.2f \n", cidade_carta2, estado_carta2, densidade_populacional_carta2);
        if (densidade_populacional_carta1 < densidade_populacional_carta2) {
            printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
        } else if (densidade_populacional_carta1 > densidade_populacional_carta2) {
            printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
        } else {
            printf("Resultado: Empate\n");
        }
        break;

    default:
        printf("Opção inválida\n");
        break;
    }
    

    return 0;
}
