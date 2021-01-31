#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int NumeroDeRegras, I=0, J, ContA=0,ContB=0, ContC=0; 
	int Conflitos=0,Cont=0, Aux=0,Aux2=0,Interacao=1, Cont3=0;
	int AuxCont=0;
	//printf("Digite O Número de Ações: ");
	//scanf("%d",&NumeroDeRegras);
	char Acao[NumeroDeRegras][10],Padroes[NumeroDeRegras][10], VetorOrdem[10];

		



	/*printf("\n       A Ç Õ E S :");
	for(I=0; I<NumeroDeRegras; I++)
	{
		fflush(stdin);
		printf("\nDigite a Ação %d:",I+1);
		gets(Acao[I]);
		fflush(stdin);
		}

	printf("\n       P A D R O E S:");
	for(I=0; I<NumeroDeRegras; I++)
	{
		fflush(stdin);
		printf("\nDigite o Padrão %d:",I+1);
		gets(Padroes[I]);
		fflush(stdin);
	}

	printf("                                  \n");
	printf("Escreva a entrada: ");
	gets(Entrada);
	fflush(stdin);
	printf("\nEntrada: %s\n",Entrada);
	*/
	
	/*
	for(I=0; I<NumeroDeRegras; I++)
	{
		if(Cont==0)
		{
			printf("___________________________________\n");
			Cont=1;
		}
		printf("Regra:%d      |Padrão:%s      |Acao:%s\n",I+1,Padroes[I], Acao[I]);
		printf("____________________________________\n");
	}	
	*/
	
	/*for(I=0; I<NumeroDeRegras; I++)
	{
		for(J=0; J<2; J++)
		{
			VetorPadroes[Aux]=Padroes[I][J];
			VetorAcao[Aux]= Acao[I][J];
			//printf("%c   %c\n",VetorPadroes[Aux],VetorAcao[Aux]);
			Aux++;
		}
	}
	//printf("%s\n",VetorPadroes);
	//printf("%s\n",VetorAcao);
	*/
	
	char VetorPadroes[7]="BACACB", VetorAcao[7]="ABACBC",Entrada[6]="CBACA";
	
	int Aux6=0, Aux7=0, C=0, Iteracao;
	int Posicao[10], PosicaoEntrada=0, PosicaoB;

	do
	{
		for(Aux6=0; Aux6<6; Aux6++)
		{
			
			for(Aux7=0; Aux7<7; Aux7=Aux7+2)
			{
				if(VetorPadroes[Aux7]!=NULL && (VetorPadroes[Aux7]==Entrada[Aux6] && VetorPadroes[Aux7+1]==Entrada[Aux6+1] )  )
				{
					if(C==0)
					{
						PosicaoEntrada=Aux6;
						PosicaoB=Aux7;
					}
					Posicao[C]=Aux7;
					Iteracao++;
					C++;
				}	
			}			
		}
		//printf("%d ",C);
		if(C>0)
		{
			for(Aux6=0; Aux6<2;Aux6++ )
			{
				Entrada[PosicaoEntrada]=VetorAcao[PosicaoB];
				Entrada[PosicaoEntrada+1]=VetorAcao[PosicaoB+1];		
			}	
			C=0;
			//Iteracao++;
		}
		else
		{
			//printf("passei aqui");
			//Interacao=0;
			Interacao=-1;
		}
		printf("%d\n",Interacao>0);
		printf("%s\n",Entrada);
	} while(Iteracao!=0);
	
	


	system("pause");
	return 0;

}
