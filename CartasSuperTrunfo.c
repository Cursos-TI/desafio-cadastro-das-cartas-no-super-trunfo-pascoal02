#include <stdio.h>
 
  int main (){
 //carta o1
    char codigo1[5];
    int população1;
    float area1;
    float pib1;
    int pontos1;
//carta 02
    char codigo2[5];
    int população2;
    float area2;
    float pib2;
    int pontos2;

    printf("CARTA 01\n");
  
    
     printf("digite o codigo da carta:"); // ex A01
     scanf ("%s", &codigo1);
     printf("digite a população:");
     scanf("%d", &população1);
     printf("digite a area:");
     scanf("%f", &area1);
     printf("digite o pib:");
     scanf("%f", &pib1);
     printf("Digite o número de pontos turísticos: "); 
     scanf("%d", &pontos1);   

     printf("CARTA 02\n");

    printf("digite o codigo da carta:");
    scanf("%s", codigo2);
    printf("digite a população:");
    scanf("%d", &população2);
    printf("digite a area:");
    scanf("%f", &area2);
    printf("digite o pib:");
    scanf("%f", &pib2);
     printf("Digite o número de pontos turísticos: "); 
     scanf("%d", &pontos2);   



    return 0;
}
