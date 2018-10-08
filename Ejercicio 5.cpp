#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int dinero;
	printf("introduce el dinero:");
	scanf("%d",&dinero);
	if(dinero>=200)
	{
		printf("\%d billetes de 100 pesos", dinero/200);	
	dinero=dinero%200;
	}
	if(dinero>=50)
	{
		printf("\%d billetes de 50 pesos", dinero/50);
		dinero=dinero%50;
	}
	if(dinero>=10)
	{
		printf("\%d monedas de 10 pesos", dinero/10);
		dinero=dinero%10;
	}
	getch();
	return 0;
}
