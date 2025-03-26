#include <stdio.h>

int main (){

    //VARIAVEIS DA PRIMEIRA CARTA
    char Carta1[10] = "01";
    char Estado1[10] = "A";
    char Cod1[4] = "A01"; 
    char Cidade1[10];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int Turisticos1;

    //VARIAVEIS DA SEGUNDA CARTA
    char Carta2[10] = "02";
    char Estado2[10] = "B";
    char Cod2[4] = "B02";
    char Cidade2[10];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;
 

    //BANNER PROGRAMA
    printf("Bem vindo ao cadastro de cartas! \n");
    printf("Você precisará cadastrar duas cartas!\n"); 
        

        //RECEPÇÃO DE VALORES DA CARTA 1
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

        //RECEPÇÃO DE VALORES DA CARTA 2
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

    
            //VARIAVEIS AVANÇADAS CARTA 1
            float DensidadeP1 = (float) Populacao1 / Area1;
            float PIBPC1 = PIB1 / (float) Populacao1;
            float Superpoder1 = (float) Populacao1 + Area1 + PIB1 + (float) Turisticos1 + PIBPC1 + (1/DensidadeP1);
            
            
            //VARIAVEIS AVANÇADAS CARTA 2
            float DensidadeP2 = (float) Populacao2 / Area2;
            float PIBPC2 = PIB2 / (float) Populacao2;
            float Superpoder2 = (float) Populacao2 + Area2 + PIB2 + (float) Turisticos2 + PIBPC2 + (1/DensidadeP2);


    //APRESENTAÇÃO DE DADOS DA CARTA 1
    printf("\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta1, Estado1, Cidade1, Cod1);
    printf("  Numero de Habitantes: %lu\n  Área: %.2f km²\n  PIB: %.2f reais\n  Quantidade de pontos turisticos: %d\n", Populacao1, Area1, PIB1, Turisticos1);
    printf("  Densidade demografica: %f Hab/km²\n  PIB per capipta: %f reais\n", DensidadeP1, PIBPC1);
    printf("  Super Poder: %.2f\n", Superpoder1);

    //APRESENTAÇÃO DE DADOS DA CARTA 2
    printf("\n\n\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta2, Estado2, Cidade2, Cod2);
    printf("  Numero de Habitantes: %lu\n  Área: %.2f km²\n  PIB: %.2f reais\n  Quantidade de pontos turisticos: %d\n", Populacao2, Area2, PIB2, Turisticos2);
    printf("  Densidade demografica: %.2f Hab/km²\n  PIB per capita: %.2f reais\n", DensidadeP2, PIBPC2);
    printf("  Super Poder: %.2f\n\n\n", Superpoder2);


int opcao;

printf("*** Escolha qual atributo você quer comparar: ***\n\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("7. Super Poder\n");
    scanf("%d", &opcao);


switch (opcao) {

    case 1:
        if (Populacao1 > Populacao2){
            printf("A Carta 1 venceu, pois possui maior numero de habitantes!\n");
        } else {
            printf("A carta 2 venceu, pois possui maior numero de habitantes!\n");
        }
        break;
    case 2:
        if (Area1 > Area2){
            printf("A Carta 1 venceu, pois possui maior área!\n");
        } else {
            printf("A carta 2 venceu, pois possui maior área!\n");
        }
        break;
    case 3:
        if (PIB1 > PIB2){
            printf("A Carta 1 venceu, pois possui maior PIB!\n");
        } else {
            printf("A carta 2 venceu, pois possui maior PIB!\n");
        }
        break;
    case 4:
        if (Turisticos1 > Turisticos2){
            printf("A Carta 1 venceu, pois possui mais pontos turisticos!\n");
        } else {
            printf("A carta 2 venceu, pois possui mais pontos turisticos!\n");
        }
        break;
    case 5:
        if (DensidadeP1 < DensidadeP2){
            printf("A Carta 1 venceu, pois possui menor densidade populacional!\n");
        } else {
            printf("A carta 2 venceu, pois possui menor densidade populacional!\n");
        }
        break;
    case 6:
        if (PIBPC1 > PIBPC2){
            printf("A Carta 1 venceu, pois possui maior PIB per capita!\n");
        } else {
            printf("A carta 2 venceu, pois possui maior PIB per capita!\n");
        }
        break;
    case 7:
        if (Superpoder1 > Superpoder2){
            printf("A Carta 1 venceu, pois possui maior Super Poder!\n");
        } else {
            printf("A carta 2 venceu, pois possui maior Super Poder!\n");}
        break;
    default:
        printf("Opção inválida\n");

}
    return 0;
}