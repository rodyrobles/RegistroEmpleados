/*
Programa: menuRegistroEmpleadosV3.0.c
Programador: Rodolfo Gutierrez Robles
Descripción: programa para el registro de empleados 
Fecha de creación: 20 febrero, 2018
Última modificación: 22 febrero, 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void dibujarMarco() {
	//inicio dibujo de marco
	gotoxy(1,1);			//esq sup izq    
  	printf("%c",201); 		
  	  	
	int i; 					//borde superior
	gotoxy(2,1);
	for (i=0; i<68; i++) 
	  	printf("%c",205); 
  	
  	int xVi=1, yVi=2;  		//vertical izquierda
	int j;					
	for (j=0; j<15; j++){
		gotoxy(xVi,yVi);	
		printf("%c",186);  
		yVi= yVi+1;
	}
	
	gotoxy(70,1);			//esq sup der
	printf("%c",187); 		
	
	int xVd=70, yVd=2;		//vertical derecha
	int k;					
	for (k=0; k<15; k++){
		gotoxy(xVd,yVd);	
		printf("%c",186);  
		yVd= yVd+1;
	}
	
	gotoxy(2,6);  			//linea intermedia
	int l;
	for (l=0; l<68; l++)
	printf("%c",205);  
	
	gotoxy(1,16);			//esq inf izq
	printf("%c",200);
	
	gotoxy(2,16);  			//borde inferior
	int m;
	for (m=0; m<68; m++)
	printf("%c",205); 
	
	gotoxy(70,16);			//esq inf der
	printf("%c",188);
	//fin dibujo de marco

}

int main () {
	
	system ("color 0a");
	int select1, select2, select3;
	
	do {
	system ("cls");
		 
	dibujarMarco();
	
	gotoxy(25,3);
	printf("RobleSys, S.A. de C.V.");
	gotoxy(15,5);  
	printf("Programa para el registro de empleados");
	gotoxy(5,8);  
	printf("Menu Principal");
	gotoxy(5,10);
	printf("1. Registro");
	gotoxy(5,11);
	printf("2. Consulta");
	gotoxy(5,12);
	printf("3. Salir\n");
	gotoxy(5,14);
	printf("Selecciona opcion: ");
	
	scanf("%d", &select1);
	
	switch(select1) {
				
		case 1:
			do {
			
			system("cls");
						
			dibujarMarco();
			
			gotoxy(25,3);
			printf("RobleSys, S.A. de C.V.");
			gotoxy(15,5);  
			printf("Programa para el registro de empleados");
			gotoxy(5,8);  
			printf("Menu registro de empleados");
			gotoxy(5,10);
			printf("1. Captura de datos");
			gotoxy(5,11);
			printf("2. Regresar al menu principal");
			gotoxy(5,14);
			printf("Selecciona opcion: ");
						
			scanf("%d", &select2);
			
			switch (select2) {
				case 1:
					system("cls");
					printf("\t Registro de empleados \n\n");
					system ("pause");
				break;
				case 2:
				break;
			} 
			} while (select2!=2);
		break;
		
		case 2: 
			do {
			system("cls");
			
			dibujarMarco();
			
			gotoxy(25,3);
			printf("RobleSys, S.A. de C.V.");
			gotoxy(15,5);  
			printf("Programa para el registro de empleados");
			gotoxy(5,8);  
			printf("Menu consulta de empleados");
			gotoxy(5,10);
			printf("1. Consulta de datos");
			gotoxy(5,11);
			printf("2. Regresar al menu principal");
			gotoxy(5,14);
			printf("Selecciona opcion: ");
						
			scanf("%d", &select3);
						
			switch (select3) {
				case 1:
					system("cls");
					printf("\t Consulta de empleados \n\n");
					system ("pause");
				break;
				case 2:
				break;
			} 
			} while (select3!=2);
		break;
		}
	
	 }while (select1!=3);
	
	printf("\n\n\n");
	system ("pause");
	return 0;
}
		
