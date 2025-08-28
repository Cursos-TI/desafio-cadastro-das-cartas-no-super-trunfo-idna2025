#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema  - Cadastro das Cartas
// carta 1

int main() {

    char estado[20];    
    char codigo[5];      
    char nomeCidade[50]; 
    int populacao;
    float area; 
    float pib;    
    int pontosTuristicos; 

    printf("Digite o nome do estado: ");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nomeCidade); 

     printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

     printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
     scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
     scanf("%d", &carta1.pontosTuristicos);


    Saídas dos dados carta 1

   printf("Estado: %s\n", carta1.estado);
    
   printf("Código: %s\n", carta1.codigo);

    printf("Cidade: %s\n", carta1.nomeCidade);

    printf("População: %d\n", carta1.populacao);

    printf("Área: %.2f km²\n", carta1.area);

    printf("PIB: %.2f\n", carta1.pib);

    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    


    return 0;
}

#include <stdio.h>

//Dados da carta 2

int main() {

char estado[10];  
char codigo[9]; 
char nomeCidade[40]; 
int populacao;
float area; 
float pib; 
int pontosTuristicos; 

printf("Digite o nome do estado: ");
scanf(" %[^\n]", carta2.estado);

 printf("Digite o código da carta: ");
scanf(" %s", carta2.codigo);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", carta2.nomeCidade); 

printf("Digite a população: ");
scanf("%d", &carta2.populacao);

 printf("Digite a área em km²: ");
scanf("%f", &carta2.area);

printf("Digite o PIB: ");
scanf("%f", &carta2.pib);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &carta2.pontosTuristicos);


Saída dos dados carta 2


printf("Estado: %s\n", carta2.estado);

printf("Código: %s\n", carta2.codigo);

printf("Cidade: %s\n", carta2.nomeCidade);

printf("População: %d\n", carta2.populacao);

printf("Área: %.2f km²\n", carta2.area);

printf("PIB: %.2f\n", carta2.pib);

 printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

  return 0;
    
}





    
    

