#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#define TAM 2

int main()
{
//<<<<<<< Finalização-do-programa_aps
    /* Adicionando caracteres do portugu�s /*/
    setlocale(LC_ALL,"Portuguese");

    /* Declara��o de vari�veis /*/
//=======
    /* Adicionando caracteres do português */
    setlocale(LC_ALL,"Portuguese");

    /* Declaração de variáveis */
//>>>>>>> master
    char nomes[TAM][100], auxiliarNome[100];
    float alturas[TAM],auxiliar,media,acmAlt,somador;
    int i, j,desvio,opcao;

//<<<<<<< Finalização-do-programa_aps
    /* Capta��o dos dados /*/
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o nome do %i� jogador: ",(i+1));
//=======
    /* Captação dos dados */
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o nome do %i: jogador: ",(i+1));
//>>>>>>> master
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
//<<<<<<< Finalização-do-programa_aps
                printf("ALTURA INV�VILDA!!!\n");
//=======
                printf("ALTURA INVÁLIDA!!!\n");
//>>>>>>> master
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

//<<<<<<< Finalização-do-programa_aps
    /* Cria��o do menu /*/
    do{
    printf("======== CLEVELAND CAVALIERS ========\n");
    printf("1 � Dados dos jogadores\n");
    printf("2 � M�dia de alturas\n");
    printf("3 � Desvio padr�o das alturas\n");
    printf("4 � Maior e Menor altura\n");
    printf("5 � Mediana das alturas\n");
    printf("6 � Finaliza\n");
    printf("Digite uma op��o: ");
//=======
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
//>>>>>>> master
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
//<<<<<<< Finalização-do-programa_aps
        case 2: /* item 2*/
            printf("A m�dia dos jogadores � igual a %.2f metros\n", media);
            system("pause");
            system("cls");
            break;
        case 3: /* item 3/*/
                printf("O desvio padr�o � igual a %.2f\n", desvio);
                system("pause");
                system("cls");
            }
//=======
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
//>>>>>>> master
            break;
        case 6:
            printf("Finalizando programa!\n");
            system("pause");
            exit(0);// não precisa do exit(0)

    }
    }while(opcao != 6);


    return 0;
}
