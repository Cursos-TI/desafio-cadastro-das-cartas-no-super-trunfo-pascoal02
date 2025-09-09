#include <stdio.h>
 
  int main (){
 //carta 01
    char codigo1[5];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    char cidade1[15];
    float densidade1;
    char estado1[10];
    float pibpercapita1;
    float superPoder1;


//carta 02
    char codigo2[5];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    char cidade2[15];
    float densidade2;
    char estado2;
    float pibpercapita2;
    float superPoder2;


    printf("CARTA 01\n");
  
    
     printf("Digite o codigo da carta:"); // ex A01
     scanf ("%s", &codigo1);
     printf("Digite a população:");
     scanf("%d", &populacao1);
     printf("Digite a area:");  // em km²
     scanf("%f", &area1);
     printf("Digite o pib:"); // em milhoes de reais
     scanf("%f", &pib1);
     printf("Digite o número de pontos turísticos: "); 
     scanf("%d", &pontos1);   
     printf("Digite o nome da cidade:");
     scanf("%s", &cidade1);
     printf("Digite o nome do estado");
     scanf(" %c", &estado1);
    

     // calculo da carta 01
     densidade1 = (float) populacao1/area1;
     pibpercapita1 = pib1/(float) populacao1;
     superPoder1 =  (float) populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0f / densidade1);
    

     

     printf("CARTA 02\n");

    printf("Digite o codigo da carta:");
    scanf("%s", codigo2);
    printf("Digite a população:");
    scanf("%d", &populacao2);
    printf("Digite a area:");  // em km²
    scanf("%f", &area2);
    printf("Digite o pib:");  // em milhoes de reais
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: "); 
    scanf("%d", &pontos2);   
    printf("Digite o nome da cidade:");
    scanf("%s", &cidade2);
    printf("Digite o nome do estado:");
    scanf(" %c", &estado2);

    // calculo da carta 02
     densidade2 = (float) populacao2/area2;
     pibpercapita2 = pib2/(float)populacao2;
     superPoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0f / densidade2);
   



     // Exibição da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f Milhoes de reais\n", pibpercapita1);

    // Exibição da Segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f milhoes de reais\n", pibpercapita2);

    
    if (populacao1 > populacao2){
        printf("A populaçao 1 é maior\n");
    } else {
         printf("a população 2 é maior\n");
    }
 









    return 0;
}
