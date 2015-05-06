#include<stdio.h>

void main(void)
{
	char *menu[]={"Reservar","Cancelar Asiento","Mostrar Ocupación","Salir"};
	char **p;
		
	p=menu;

	int i;
	for(i=1;i<5;i++)
	{
		printf("%d) %s\n", i,*(p+i-1));
		
	}
}
