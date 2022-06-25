#include<stdio.h>
#include<stdlib.h>
main()
{ 
	float nota1,nota2,nota3,nota4,media;
	
	printf("Digite a nota ");
	scanf ("%f",&nota1);
	
	printf("Digite a segunda nota ");
	scanf("%f",&nota2);
	
	printf("Digite a terceira nota ");
	scanf("%f",&nota3);
	
	printf("Digite a quarta nota ");
	scanf("%f",&nota4);
	
	media = (nota1*1+nota2*2+nota3*3+nota4*4)/6;
	printf("media = %.f\n",media);
	
	if (media>=6)
	{
		printf("Aprovado\n");
	}
	
	if (media<6)
	{
		printf("recuperação\n");
	}
	
	if (media<3)
	{
		printf("retido");
	}
	system("pause");
}