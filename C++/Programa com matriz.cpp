#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int lin, col, i, j;
	int menu, opcao;
	int x, y;
	int soma;
	int sub;
	int mult;
	int div;
	
	//Solicita ao usuário o tamanho da matriz
	printf("Este programa ira solicitar o tamanho da matriz desejada, por favor insira a seguir o tamanho da matriz!\n\n");
	system("pause");
	system("cls");
	printf("Insira um valor para a quantidade de linhas da matriz: ");
	scanf("%d", &lin);
	fflush(stdin);
	system("cls");
	printf("Insira um valor para a quantidade de colunas da matriz: ");
	scanf("%d", &col);
	fflush(stdin);
	
	int matriz [lin] [col];	//declara o tamanho da matriz inserida pelo usuário
	
	system("cls");
	
	//Conforme o tamanho da matriz, solicita ao usuário o valor de cada espaço da matriz!
	for( i = 0; i < lin ; i++){
		for( j = 0; j < col; j++){
			printf("Insira o valor da linha %d coluna %d: " , i+1, j+1);
			scanf("%d", &matriz [i][j]);
			fflush(stdin);
			
		}
	}
	
	system("cls");
	
	//laço de repetição com um menu para realizar operações com os valores da matriz, conforme o usuário desejar, menu com o switch/case
	do{
		
	printf("O que deseja fazer?");
	printf("\n1 -> Somar valores da matriz\n2 -> Subtrair valores da matriz\n3 -> Multiplicar valores da matriz\n4 -> Dividir valores da matriz\n5 -> Exibir matriz\n0 ->Sair\n");
	printf("Digite sua opcao: ");
	scanf("%d", &menu);
	fflush(stdin);
	
	printf("\n\n");
	
	system("cls");	
		opcao = menu;
		
		switch(opcao){
			
			case 0:
				printf("Obrigado!\n\n");
				printf("Saindo!\n\n");
				system("pause");
				system("cls");
				break;
				
			case 1 :
				printf("Para somar os valores da matriz, insira a posicao Linha X Coluna!\n");
				printf("Para o primeiro valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						x = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("Para o Segundo valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						y = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("O resultado da soma entre %d e %d eh: %d\n\n\n",x, y, x + y);
						system("pause");
						system("cls");
						break;
					
					case 2:
					printf("Para subtrair os valores da matriz, insira a posicao Linha X Coluna!\n");
					printf("Para o primeiro valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						x = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("Para o Segundo valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						y = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("O resultado da subtracao entre %d e %d eh: %d\n\n\n",x, y, x - y);
						system("pause");
						system("cls");
						break;
						
					case 3:
					printf("Para multiplicar os valores da matriz, insira a posicao Linha X Coluna!\n");
					printf("Para o primeiro valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						x = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("Para o Segundo valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						y = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("O resultado da multiplicacao entre %d e %d eh: %d\n\n\n",x, y, x * y);
						system("pause");
						system("cls");
						break;
					
					case 4:
					printf("Para dividir os valores da matriz, insira a posicao Linha X Coluna!\n");
					printf("Para o primeiro valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						x = matriz[i] [j];
						
						}
					}
					
					system("cls");
					
					printf("Para o Segundo valor!\n");
					printf("Digite a linha: ");
					scanf("%d", &lin);
					fflush(stdin);
					printf("Digite a coluna: ");
					scanf("%d", &col);
					fflush(stdin);
					for( i = 0; i < lin ; i++){
						for( j = 0; j < col; j++){
						y = matriz[i] [j];
						
						}
					}
					
					system("cls");
					printf("O resultado da divisao entre %d e %d eh: %d\n\n\n",x, y, x / y);
					system("pause");
					system("cls");
						break;
						
					case 5:
						printf("A matriz eh: \n");
	
						for( i = 0; i < lin ; i++){
							for( j = 0; j < col; j++){
								if((i <= lin) && (j == 0)){
									printf("Linha %d: ", i+1);
								}
								printf("[%d] ", matriz [i][j]);
							}
							
							printf("\n");
						}
						
						printf("\n\n\n");
						system("pause");
						system("cls");
						break;
					default:
						printf("Opcao invalida!");
						system("cls");
		}
	} while( menu != 0);


	
	return 0; //esse return é necessário? *pesquisar
	
	system("pause");
}
