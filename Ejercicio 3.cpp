#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
int main(void)
{
	int A,elev;
	printf("Introduce el valor del dato A: ");
	scanf("%d",&A);
	if(A%2 ==0)
	{
		printf("\el numero es par");
		elev=pow(A,2);
		printf("\el numero elevado al cuadrado: %d ", elev);
	}
	else
	{
		printf("\el numero es impar");
		elev=pow(A,3);
		printf("\el numero elevado al cubo: %d ", elev);
	}
		getch();
	return 0;
}
