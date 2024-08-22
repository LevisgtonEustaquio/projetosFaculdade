#include <stdio.h>
#include <stdlib.h>

	int lin, col, i, j;
	int menu, opcao;
	int x, y;
	
	int matriz [0] [0];

int introducao(){
	printf("Este programa ira solicitar o tamanho da matriz desejada e em seguida voce podera selecionar os valores dentro da matriz \ne realizar operacoes com esses valores!\n");
	printf("\n\n\nPressione qualquer tecla para iniciar as funcoes do programa");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("PAUSE");
	system("cls");
}

int solicitaMatriz(){
	
	printf("Insira um valor para a quantidade de linhas da matriz: ");
	scanf("%d", &lin);
	fflush(stdin);
	system("cls");
	printf("Insira um valor para a quantidade de colunas da matriz: ");
	scanf("%d", &col);
	fflush(stdin);
	
	int matriz [lin] [col];	//declara o tamanho da matriz inserida pelo usu?rio
	
	system("cls");
	
	//Conforme o tamanho da matriz, solicita ao usu?rio o valor de cada espa?o da matriz!
	for( i = 0; i < lin ; i++){
		for( j = 0; j < col; j++){
			printf("Insira o valor da linha %d coluna %d: " , i+1, j+1);
			scanf("%d", &matriz [i][j]);
			fflush(stdin);
			
		}
	}
	
	
	
	system("cls");
	
}

int exibeMatriz(){
	
	matriz [i] [j] = matriz [lin] [col];
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
}

/*int menuPrincipal(){
	
	
	//la?o de repeti??o com um menu para realizar opera??es com os valores da matriz, conforme o usu?rio desejar, menu com o switch/case
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

}
*/

int main(){
	
	
	introducao();
	solicitaMatriz();
	exibeMatriz();
	
	
}
