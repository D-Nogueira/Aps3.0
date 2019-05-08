#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#define TAM 2

int main()
{
    /* Adicionando caracteres do português */
    setlocale(LC_ALL,"Portuguese");

    /* Declaração de variáveis */
    char nomes[TAM][100], auxiliarNome[100];
    float alturas[TAM],auxiliar,media,acmAlt,somador;
    int i, j,desvio,opcao;

    /* Captação dos dados */
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o nome do %i: jogador: ",(i+1));
        gets(nomes[i]);
        system("cls");
    }
    for(i = 0 ; i < TAM ; i++){
        do{
            printf("Digite a altura de %s: ",nomes[i]);
            scanf("%f",&alturas[i]);
            acmAlt+=alturas[i];
            somador+=pow(alturas[i],2);
            if(alturas[i] <= 0){
                printf("ALTURA INVÁLIDA!!!\n");
                system("pause");
            }
            system("cls");
        }while(alturas[i] <= 0);
    }
    for(i = 0; i<TAM;i++){
        for(j=i;j<TAM;j++){
            if(alturas[j]<alturas[i]){
                auxiliar = alturas[i];
                alturas[i] = alturas[j];
                alturas[j] = auxiliar;
                strcpy(auxiliarNome,nomes[i]);
                strcpy(nomes[i],nomes[j]);
                strcpy(nomes[j],auxiliarNome);
            }
        }
    }
    media=acmAlt/TAM;
    desvio=(somador/TAM)-pow(media,2);

    /* Criação do menu */
    do{
    printf("======== CLEVELAND CAVALIERS ========\n");
    printf("1 - Dados dos jogadores\n");
    printf("2 - Média de alturas\n");
    printf("3 - Desvio padrão das alturas\n");
    printf("4 - Maior e Menor altura\n");
    printf("5 - Mediana das alturas\n");
    printf("6 - Finaliza\n");
    printf("Digite uma opção: ");
    scanf("%i",&opcao);
    switch(opcao)
    {
        case 1: /* item 1*/
            for(i = 0 ; i < TAM ; i++){
                printf("\nJOGADOR: %s\n",nomes[i]);
                printf("ALTURA: %.2fm\n",alturas[i]);
            }
            system("pause");
            system("cls");
            break;
        case 2: /* item 2 */
            printf("A média dos jogadores é igual a %.2f metros\n", media);
            system("pause");
            system("cls");
            break;
        case 3: /* item 3 */
                printf("O desvio padrão é igual a %.2f\n", desvio);
                system("pause");
                system("cls");
            break;
        case 4:// item 4

            break;
        case 5: // item 5
            break;
        case 6: // item 6
            break;

    }
    }while(opcao != 6);


    return 0;
}
