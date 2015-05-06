#include<stdio.h>

main()
{
	struct person{
		char *name;
		unsigned int edad;
		};

	struct person tomas;

	tomas.name="Tomas";
	tomas.edad=42;

	printf("%s\n",tomas.name);
	printf("%d\n",tomas.edad);
	printf("hola");
	printf("esta es la tercera edición que se le hace al main");

}
