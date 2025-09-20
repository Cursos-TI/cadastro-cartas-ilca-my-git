

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações
#include <stdio.h> 

int main() {

// Começo do programa 

//Variaveis - carta 1

char estado;
char codigo[2];
char cidade[50];
unsigned long int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade;
float pib_per_capita;
float super_poder;

//Variaveis - carta 2 

char estado2;
char codigo2[2];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade2;
float pib_per_capita2;
float super_poder2;

// Variaveis de comparação

int comparacao_populacao;
int comparacao_area;
int comparacao_pib;
int comparacao_pontos_turisticos;
int comparacao_densidade;
int comparacao_pib_per_capita;
int comparacao_super_poder;

//Entrada de dados - carta 1

printf("Carta 1\n");

printf("Digite o Estado:\n");
scanf("%c", &estado);

printf("Digite o codigo:\n");
scanf("%s", &codigo);

printf("Digite a cidade:\n");
scanf("%s", &cidade);

printf("Digite a população:\n");
scanf("%lu", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos);

// Entrada de dados - carta 2

printf("Carta 2 \n");

printf(" Digite o Estado:\n");
scanf("%c", &estado2);

printf("Digite o codigo:\n");
scanf("%s", &codigo2);

printf("Digite a cidade:\n");
scanf("%s", &cidade2);

printf("Digite a população:\n");
scanf("%lu", &populacao2);

printf("Digite a área:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos2);

// Calculo Densidade populacional - Cartas 1 e 2 

//Carta 1 - densidade 
densidade = (float)populacao/area; 

//Carta 2 - densidade 
densidade2 = (float)populacao2/area2; 

// Calculo PIB per capita - Cartas 1 e 2

// Carta 1 - PIB per capita 
pib_per_capita = pib/(float)populacao;

// Carta 2 - PIB per capita 
pib_per_capita2 = pib2/(float)populacao2;

// Calculo Super Poder - cartas 1 e 2

// Carta 1 - super poder
super_poder = (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + (1/densidade);

// Carta 2 - super poder
super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1/densidade2);

//Saída de dados - carta 1

printf("Carta 1\n");

printf("Estado: %c \n", estado);

printf("Código: %s \n", codigo);

printf("Cidade: %s \n", cidade);

printf("População: %lu \n", populacao);

printf("Área: %.2f \n", area);

printf("PIB: %.2f \n", pib);

printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

printf("Densidade populacional: %.2f \n", densidade);

printf("PIB per capita: %.2f \n", pib_per_capita);

printf("Super poder: %.2f \n", super_poder);

// Saída de dados - carta 2 

printf("Carta 2\n");

printf("Estado: %c \n", estado2);

printf("Código: %s \n", codigo2);

printf("Cidade: %s \n", cidade2);

printf("População: %lu \n", populacao2);

printf("Área: %.2f \n", area2);

printf("PIB: %.2f \n", pib2);

printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

printf("Densidade populacional: %.2f \n", densidade2);

printf("PIB per capita: %.2f \n", pib_per_capita2);

printf("Super poder: %.2f \n", super_poder2);

// Comparacao de cartas 1 e 2 

comparacao_populacao = populacao > populacao2;

comparacao_area = area > area2; 

comparacao_pib = pib > pib2;

comparacao_pontos_turisticos = pontos_turisticos > pontos_turisticos2;

comparacao_densidade = densidade < densidade2;

comparacao_pib_per_capita = pib_per_capita > pib_per_capita2;

comparacao_super_poder = super_poder > super_poder2;

// Saída da comparacao de cartas 1 e 2 

if(comparacao_populacao == 1){
    printf("População - Carta 1 venceu (%d) \n", comparacao_populacao);
    } else if(comparacao_populacao == 0) {
        printf("População - Carta 2 venceu (%d) \n", comparacao_populacao);
        }

        if(comparacao_area == 1){
            printf("Área - Carta 1 venceu (%d) \n", comparacao_area);
            } else if (comparacao_area == 0){
                printf("Área - Carta 2 venceu (%d) \n", comparacao_area);
                }

                if (comparacao_pib == 1){
                    printf("PIB - Carta 1 venceu (%d) \n", comparacao_pib);
                    } else if (comparacao_pib == 0){
                        printf("PIB - Carta 2 venceu (%d) \n", comparacao_pib);
                        }

                        if (comparacao_pontos_turisticos == 1){
                            printf("Quantidade de pontos turísticos - Carta 1 venceu (%d) \n", comparacao_pontos_turisticos);
                            } else if (comparacao_pontos_turisticos == 0){
                                printf("Quantidade de pontos turísticos - Carta 2 venceu (%d) \n", comparacao_pontos_turisticos);
                                }

                                if(comparacao_densidade == 1){
                                    printf("Densidade populacional - Carta 1 venceu (%d) \n", comparacao_densidade);
                                    } else if(comparacao_densidade == 0){
                                        printf("Densidade Populacional - Carta 2 venceu (%d) \n", comparacao_densidade);
                                        }

                                        if(comparacao_pib_per_capita == 1){
                                            printf("PIB per Capita - Carta 1 venceu (%d) \n", comparacao_pib_per_capita);
                                            } else if(comparacao_pib_per_capita == 0){
                                                printf("PIB per Capita - Carta 2 venceu (%d) \n", comparacao_pib_per_capita);
                                                }

                                                if (comparacao_super_poder == 1){
                                                    printf("Super Poder - Carta 1 venceu (%d) \n", comparacao_super_poder);
                                                    } else if (comparacao_super_poder == 0) {
                                                        printf("Super poder - Carta 2 venceu (%d) \n", comparacao_super_poder);
                                                        }

                                                        //Fim do programa

                                                        }