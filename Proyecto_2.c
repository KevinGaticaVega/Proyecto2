struct nodo{
	char *nombre;
  int matricula;
  float promedio;
	struct nodo* der;
	struct nodo* izq;
} nodo;

#include <stdio.h>

int main()
{
    
    int opcionMenu=0;
    	do{
		printf("\n|---------------------------------------------------------------------|");
		printf("\n|                           ° MENU °                                  |");
		printf("\n|-------------------------------|-------------------------------------|");
		printf("\n| 1. Dar de alta al alumno      | 4. Mostrar alumnos                  |");
		printf("\n| 2. Editar datos del alumno    | 5. Calcular promedio del grupo      |");
		printf("\n| 3. Dar de baja al alumno      | 6. Salir                            |");
		printf("\n|-------------------------------|-------------------------------------|");
		printf("\n\n Escoja una Opcion: ");
		system("cls");
		fflush(stdin);
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1 :
				printf("HOLA A");
				break;
			case 2: 
			    printf("HOLA B");
				break;	
			case 3 :
			    printf("HOLA C");
				break;
			case 4 :
			    printf("HOLA D");
				break;
            case 5 :;
			    printf("HOLA E");
				break;
			case 6 :
				printf("\n\n Programa finalizado...");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");	
		}
	}while(opcionMenu != 6);

    return 0;
}
/**/
