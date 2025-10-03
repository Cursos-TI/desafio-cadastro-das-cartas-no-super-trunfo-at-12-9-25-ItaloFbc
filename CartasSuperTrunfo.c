#include <stdio.h>

int main() {
  // Váriaveis para a carta1;
     
     char estado1[] = "Rio de Janeiro";
     char carta1[] = "A";
     char cidade1[] = "Rio de Janeiro";
     int populacao1 = 5000000;
     float area1 = 1200.5;
     float pib1 = 300000.0;
     int pontos_turisticos1 = 10;

  // Váriaveis para a carta2;
    
      char estado2 = "Sao Paulo";
      char carta2 = "B";
      char cidade2 = "Sao Paulo";
      int populacao2 = 12000000;
      float area2 = 1500.0;
      float pib2 = 400000.0;
      int pontos_turisticos2 = 15;

  //Exibir as cartas; 

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("\nComparando as cartas...\n");
  
    // Resultado do jogo;
    
  if(populacao1 > populacao2) {
      printf("Carta 1 vence!\n");
  } else(populacao1 < populacao2) {
      printf("Carta 2 vence!\n");
  }

      if (area1 > area2) {
          printf("Carta 1 vence!\n");
      } else(area1 < area2) {
          printf("Carta 2 vence!\n");
      } 

          if (pib1 > pib2) {
              printf("Carta 1 vence!\n");
          } else(pib1 < pib2) {
              printf("Carta 2 vence!\n");
         

          if (pontos_turisticos1 > pontos_turisticos2) {
              printf("Carta 1 vence!\n");
          } else(pontos_turisticos1 < pontos_turisticos2) {
              printf("Carta 2 vence!\n");
          }
      

return 0;
}
}
