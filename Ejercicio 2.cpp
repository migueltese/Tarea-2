#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int calificacion;
	printf("calificacion");
	scanf("%d",&calificacion);
	if(calificacion>=70)
	{
	printf("Felicidades has aprobado");
	}
	else
	{
		printf("Continua con tus estudios, necesitas esforzarte mas");
	}
	getch();
	return 0;
}
