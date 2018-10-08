#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int A;
	int B;
	int C;
	
	printf("introduce el valor del dato A:");
	scanf("%d",&A);

	printf("introduce el valor del dato B:");
	scanf("%d",&B);

	printf("introduce el valor del dato C:");
	scanf("%d",&C);
	
	if(A>B & A>C)
	{
		printf("el valor A en mayor");
	}
	if(B>A & B>C)
	{
		printf("el valor B es mayor");
	}
	if(C>A & C>B)
	{
		printf("el valor de C es mayor");
	}
	getch();
	return 0;
}
