#include <stdio.h>

int main (){

    //Variaveis da primeira carta
    char Carta1[10] = "01";
    char Estado1[10] = "A";
    char Cod1[4] = "A01"; 
    char Cidade1[10];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int Turisticos1;

    //Variaveis da segunda carta
    char Carta2[10] = "02";
    char Estado2[10] = "B";
    char Cod2[4] = "B02";
    char Cidade2[10];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;
 

    //Banner programa
    printf("Bem vindo ao cadastro de cartas! \n");
    printf("Você precisará cadastrar duas cartas!\n"); 
        

        //Recepção de valores da primeira carta
        printf("Digite as seguintes informações sobre a primeira carta:\n\n");
        printf("Cidade: ");
        scanf("%s", Cidade1);
        printf("População: ");
        scanf("%lu", &Populacao1);
        printf("Área em m²: ");
        scanf("%f", &Area1);
        printf("PIB: ");
        scanf("%f", &PIB1);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &Turisticos1);

        //Receção de valores da segunda carta
        printf("\nAgora digite as informações da segunda carta:\n\n");
        printf("Cidade: ");
        scanf("%s", Cidade2);
        printf("População: ");
        scanf("%lu", &Populacao2);
        printf("Área em m²: ");
        scanf("%f", &Area2);
        printf("PIB: ");
        scanf("%f", &PIB2);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &Turisticos2);

    
            //Variaveis avançadas da primeira carta
            float DensidadeP1 = (float) Populacao1 / Area1;
            float PIBPC1 = PIB1 / (float) Populacao1;
            float Superpoder1 = (float) Populacao1 + Area1 + PIB1 + (float) Turisticos1 + PIBPC1 + (1/DensidadeP1);
            
            
            //Variaveis avançadas da segunda carta
            float DensidadeP2 = (float) Populacao2 / Area2;
            float PIBPC2 = PIB2 / (float) Populacao2;
            float Superpoder2 = (float) Populacao2 + Area2 + PIB2 + (float) Turisticos2 + PIBPC2 + (1/DensidadeP2);


    //Apresentação de dados da primeira
    printf("\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta1, Estado1, Cidade1, Cod1);
    printf("  Numero de Habitantes: %lu\n  Área: %.2f km²\n  PIB: %.2f reais\n  Quantidade de pontos turisticos: %d\n", Populacao1, Area1, PIB1, Turisticos1);
    printf("  Densidade demografica: %f Hab/km²\n  PIB per capipta: %f reais\n", DensidadeP1, PIBPC1);
    printf("  Super Poder: %.2f\n", Superpoder1);

    //Apresentação de dados da segunda carta
    printf("\n\n\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta2, Estado2, Cidade2, Cod2);
    printf("  Numero de Habitantes: %lu\n  Área: %.2f km²\n  PIB: %.2f reais\n  Quantidade de pontos turisticos: %d\n", Populacao2, Area2, PIB2, Turisticos2);
    printf("  Densidade demografica: %.2f Hab/km²\n  PIB per capita: %.2f reais\n", DensidadeP2, PIBPC2);
    printf("  Super Poder: %.2f\n\n\n", Superpoder2);


int opcao1;
int opcao2;

printf("*** Escolha DOIS atributos para comparar: ***\n\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("7. Super Poder\n");
    scanf("%d", &opcao1);
    scanf("%d", &opcao2);

// Variaveis para comparação
char *Empate = "empate";
char *Res1 = NULL;
char *Res2 = NULL;

// Comparação da primeira opção
switch (opcao1) {
    case 1: Res1 = (Populacao1 > Populacao2) ? Carta1 : (Populacao1 == Populacao2) ? Empate : Carta2; break;
    case 2: Res1 = (Area1 > Area2) ? Carta1 : (Area1 == Area2) ? Empate : Carta2; break;
    case 3: Res1 = (PIB1 > PIB2) ? Carta1 : (PIB1 == PIB2) ? Empate : Carta2; break;
    case 4: Res1 = (Turisticos1 > Turisticos2) ? Carta1 : (Turisticos1 == Turisticos2) ? Empate : Carta2; break;
    case 5: Res1 = (DensidadeP1 < DensidadeP2) ? Carta1 : (DensidadeP1 == DensidadeP2) ? Empate : Carta2; break;
    case 6: Res1 = (PIBPC1 > PIBPC2) ? Carta1 : (PIBPC1 == PIBPC2) ? Empate : Carta2; break;
    case 7: Res1 = (Superpoder1 > Superpoder2) ? Carta1 : (Superpoder1 == Superpoder2) ? Empate : Carta2; break;
    default: printf("Opção inválida\n"); break;
}

// Comparação da segunda opção
switch (opcao2) {
    case 1: Res2 = (Populacao1 > Populacao2) ? Cidade1 : (Populacao1 == Populacao2) ? Empate : Cidade2; break;
    case 2: Res2 = (Area1 > Area2) ? Cidade1 : (Area1 == Area2) ? Empate : Cidade2; break;
    case 3: Res2 = (PIB1 > PIB2) ? Cidade1 : (PIB1 == PIB2) ? Empate : Cidade2; break;
    case 4: Res2 = (Turisticos1 > Turisticos2) ? Cidade1 : (Turisticos1 == Turisticos2) ? Empate : Cidade2; break;
    case 5: Res2 = (DensidadeP1 < DensidadeP2) ? Cidade1 : (DensidadeP1 == DensidadeP2) ? Empate : Cidade2; break;
    case 6: Res2 = (PIBPC1 > PIBPC2) ? Cidade1 : (PIBPC1 == PIBPC2) ? Empate : Cidade2; break;
    case 7: Res2 = (Superpoder1 > Superpoder2) ? Cidade1 : (Superpoder1 == Superpoder2) ? Empate : Cidade2; break;
    default: printf("Opção inválida\n"); break;
}

// Resultados
if (opcao1 == opcao2) {
    printf("ERRO - Você selecionou a mesma opção duas vezes!\n");
} else if (opcao1 > 7 || opcao2 > 7 || opcao1 < 1 || opcao2 < 1) {
    printf("ERRO - Uma das opções que você selecionou é inválida!\n");
} else {
    printf("\n\n*** RESULTADO ***\n\n");
    printf("Primeiro atributo: %s\n", Res1);
    printf("Segundo atributo: %s\n", Res2);
}

return 0;
}