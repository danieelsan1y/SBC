#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<string.h>

int main()
	{
		setlocale(LC_ALL,"portuguese");
		int NumeroDeRegras, I, J, Cont=0;
		printf("Digite O N�mero de A��es: ");
		scanf("%d",&NumeroDeRegras);
		
		char Acao[NumeroDeRegras][10],Padroes[NumeroDeRegras][10], Entrada[10];
	
		printf("\n       P A D R O E S:");	
		for(I=0; I<NumeroDeRegras; I++)
		{
			fflush(stdin);
			printf("\nDigite o Padr�o %d:",I+1);
			gets(Padroes[I]);	
			fflush(stdin);	
		}
		printf("\n       A � � E S :");	
		
		for(I=0; I<NumeroDeRegras; I++)
		{
			fflush(stdin);
			printf("\nDigite a A��o %d:",I+1);
			gets(Acao[I]);	
			fflush(stdin);	
		}


		
		printf("                                  \n");
		for(I=0; I<NumeroDeRegras; I++)
		{
			if(Cont==0)
			{
				printf("_______________________________________\n");
				Cont=1;
			}
			printf("Regra:%d      |Padr�o:%s      |Acao:%s \n",I+1,Padroes[I], Acao[I]);
			printf("_______________________________________\n");	
		}
		
		printf("Escreva a entrada: ");
		gets(Entrada);
		fflush(stdin);	
		printf("%s\n",Entrada);
		
	system("pause");
	return 0;
	
	}
