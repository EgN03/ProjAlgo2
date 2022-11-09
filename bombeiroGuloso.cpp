/* Projeto 2 - Bombeiro Guloso
Integrantes:
	Enrique Granado Novaes 32107803
	Enzo Rocha Damato 32125992
	Gabriel Santos de Oliveira Arruda 32107439 */
	
#include <stdio.h>
#include <stdlib.h> //Biblioteca para chamar o malloc()
#include <stdbool.h>

void lerAquivo(FILE* arquivo){
	int incendioEsq, QtdeEsq, EsqInicial, EsqFinal, minutos,i,j,total,tMusica;
	int combEsq = 10; // Tem 10 combinacoes de esquina 
	fscanf(arquivo, "%d", &incendioEsq); //Leitura da esquina do incendio
	fscanf(arquivo, "%d", &QtdeEsq); //Leitura da qtde de esquinas
	for(i=0;i<combEsq;i++){ 
		fscanf(arquivo, "%d", &EsqInicial); //Leitura da esquina inicial
		fscanf(arquivo, "%d", &EsqFinal); //Leitura da esquina final
		fscanf(arquivo, "%d", &minutos);//Leitura de quanto tempo (minutos)
	}
}

int main()
{
	FILE *arquivo;
	char nome[100]; //= "D:/mack/projAlg2/projFita-master/projFita-master/musicas.txt";
	printf("Qual o caminho do arquivo?\n"); //Digite o caminho que o txt está.
	scanf("%s",nome);
	printf("%s\n",nome);
	arquivo = fopen(nome,"r"); //Lê o arquivo txt.
	while(arquivo == NULL){
		printf("arquivo nao encontrado, digite o caminho completo e a extensao:\n");
		scanf("%s",nome);
		arquivo = fopen(nome,"r");
	}
	lerAquivo(arquivo);//Leitura do arquivo

    return 0;
}
