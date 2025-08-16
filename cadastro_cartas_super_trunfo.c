#include <stdio.h>


void cadastrar_cartas(){
    //  Definição das variaveis da primeira carta
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
    scanf("%3s", &codigo_carta1); // sem & porque já é array

    
    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", &cidade_carta1);
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta1);
    
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area_carta1);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_carta1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &numero_pontos_turisticos_carta1);
    printf("-----------------------------\n\n");


    // Cadastro da segunda carta
    printf("Agora, vamos cadastrar a segunda carta.\n");
    printf("---------- CARTA 2 ----------\n");

    printf("Informe a letra do Estado (de 'A' a 'H'):");
    scanf(" %c", &estado_carta2);
    
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

    printf("-----------------------------\n\n");


    densidade_populacional_carta1 = (float) populacao_carta1 / area_carta1;
    pib_per_capita_carta1 =  (float) pib_carta1  * 1000000000.0 /  populacao_carta1;
    
    super_poder_carta1 = (float) populacao_carta1 + area_carta1 + (float) pib_carta1 + numero_pontos_turisticos_carta1 + pib_per_capita_carta1 + 1 / densidade_populacional_carta1;

    densidade_populacional_carta2 = (float) populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (float) pib_carta2 * 1000000000.0 / populacao_carta2;
    
    super_poder_carta2 = (float) populacao_carta2 + area_carta2 + (float) pib_carta2 + numero_pontos_turisticos_carta2 + pib_per_capita_carta2 + 1 / densidade_populacional_carta2;
    
    
    
    printf("Cadastro concluído com sucesso! ✅\n\n");
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


    printf("\nComparação de Cartas:\n");

    printf("População, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", populacao_carta1 > populacao_carta2);
    printf("Área, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", area_carta1 > area_carta2);
    printf("PIB, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", pib_carta1 > pib_carta2);
    printf("Pontos Turísticos, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2);
    printf("Densidade Populacional, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", densidade_populacional_carta1 < densidade_populacional_carta2);
    
    // if (pi)
    // printf("PIB per Capita, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", pib_per_capita_carta1 > pib_per_capita_carta2);
    
    
    printf("Super Poder, se 0 carta 2 vence, se 1 carta 1 vence: %d\n", super_poder_carta1 > super_poder_carta2);
    

    printf("Comparação de cartas (Atributo: Pib per Capita):\n");
    printf("Carta 1 - %s (%c): %.2f \n", cidade_carta1, estado_carta1, pib_per_capita_carta1);
    printf("Carta 2 - %s (%c): %.2f \n", cidade_carta2, estado_carta2, pib_per_capita_carta2);
    
    if (pib_per_capita_carta1 > pib_per_capita_carta2) {
        printf("Resultado: Carta 1 (%s) vence\n", cidade_carta1);
    } else {
        printf("Resultado: Carta 2 (%s) vence\n", cidade_carta2);
    }

    

}

int main() {
    cadastrar_cartas();

    return 0;
}

