/*
Programa: menuRegistroEmpleadosV1.0.c
Programador: Rodolfo Gutierrez Robles
Descripción: programa para el registro de empleados 
Fecha de creación: 20 febrero, 2018
Última modificación: 2 marzo, 2018
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void dibujarMarco();
void dibujarMarco2();

struct empleado {
		char nombreApellidos[50], direccion[80], area[30];
		int claveEmpleado;
		float sueldoDiario;
	} empleados[10]; 

int main () {
	
	system ("color 0a");
	int select1, select2, select3, opc, i=0, indice=0, cicloClave=1, clave;

	do {
	system ("cls");
	dibujarMarco();

	gotoxy(25,3); printf("RobleSys, S.A. de C.V.");
	gotoxy(15,5); printf("Programa para el registro de empleados");
	highvideo();textbackground(GREEN);
	gotoxy(5,8);  printf("Menu Principal");
	lowvideo();textbackground(BLACK);
	gotoxy(5,10); printf("1. Registro");
	gotoxy(5,11); printf("2. Consulta");
	gotoxy(5,12); printf("3. Salir\n");
	gotoxy(5,14); printf("Selecciona opcion: ");
	
	scanf("%d", &select1);
	
	switch(select1) {
				
		case 1:
			do {
			system("cls");
						
			dibujarMarco();
			
			gotoxy(25,3); printf("RobleSys, S.A. de C.V.");
			gotoxy(15,5); printf("Programa para el registro de empleados");
			highvideo();textbackground(GREEN);
			gotoxy(5,8);  printf("Menu registro de empleados");
			lowvideo();textbackground(BLACK);
			gotoxy(5,10); printf("1. Captura de datos");
			gotoxy(5,11); printf("2. Regresar al menu principal");
			gotoxy(5,14); printf("Selecciona opcion: ");
			scanf("%d", &select2);
			
			switch (select2) {
				case 1:
					system("cls");
					
					if (indice>=10) 
						printf("\n\tEl registro de empleados esta completo!");
					
					else {

					do {
						system("cls");
						dibujarMarco2();
						gotoxy(25,2); printf("RobleSys, S.A. de C.V.");
						gotoxy(15,3); printf("Programa para el registro de empleados");
						highvideo();textbackground(GREEN);
						gotoxy(25,5);  printf("Captura de datos\n\n");
						lowvideo();textbackground(BLACK);
																		
						printf("\nIngresar clave de empleado: ");
						scanf("%i",&clave);
						
						if (clave<1000 || clave>9999) {
							printf("clave no valida\n");
		        			system("pause");
						}else {
	    					cicloClave=0;
	    				}
					} while (cicloClave==1);
					
					empleados[indice].claveEmpleado = clave;
					printf("\nIngresar nombre completo del empleado #%i: ",indice+1);
					fflush(stdin);
					gets(empleados[indice].nombreApellidos);
					printf("\nIngresar direccion del empleado: \n");
					gets(empleados[indice].direccion);
					printf("\nDireccion en la que labora: ");
					printf("\n 1) Administracion");
					printf("\n 2) Finanzas");
					printf("\n 3) Recursos Humanos");
					printf("\n 4) Almacen");
					printf("\n 5) Ventas");
					printf("\nSeleccione una opcion: ");
					scanf("%i", &opc);
					
					switch(opc){
						case 1:
							strcpy(empleados[indice].area, "Administracion" );
							break;
						case 2:
							strcpy(empleados[indice].area, "Finanzas" );
							break;
						case 3:
							strcpy(empleados[indice].area, "Recursos Humanos" );
							break;
						case 4:
							strcpy(empleados[indice].area, "Almacen" );
							break;
						case 5:
							strcpy(empleados[indice].area, "Ventas" );
							break;
					}
					printf("\nIngresar sueldo diario: ");
					scanf("%f",&empleados[indice].sueldoDiario);
					indice++;
					}
					
					printf("\n\n");
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
			
			gotoxy(25,3); printf("RobleSys, S.A. de C.V.");
			gotoxy(15,5); printf("Programa para el registro de empleados");
			highvideo();textbackground(GREEN);
			gotoxy(5,8);  printf("Menu consulta de empleados");
			lowvideo();textbackground(BLACK);
			gotoxy(5,10); printf("1. Consulta de datos");
			gotoxy(5,11); printf("2. Regresar al menu principal");
			gotoxy(5,14); printf("Selecciona opcion: ");
			scanf("%d", &select3);
						
			switch (select3) {
				case 1:
					system("cls");
					dibujarMarco2();
					gotoxy(25,2); printf("RobleSys, S.A. de C.V.");
					gotoxy(15,3); printf("Programa para el registro de empleados");
					highvideo();textbackground(GREEN);
					gotoxy(25,5);  printf("Consulta de datos\n\n");
					lowvideo();textbackground(BLACK);
					printf(". . . En construccion  ");
					system ("pause");
				break;
				case 2:
				break;
			} 
			} while (select3!=2);
		break;
		}
	
	 }while (select1!=3);
	
	printf("\n\n\n\n");
	system ("pause");
	return 0;
}

	void dibujarMarco() {
	system ("color 0a");
	//inicio dibujo de marco
	gotoxy(1,1); printf("%c",201); 		//esq sup izq    
  	
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
	
	gotoxy(70,1);	printf("%c",187);		//esq sup der
	 		
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
	
	gotoxy(1,16);	printf("%c",200);		//esq inf izq
	
	gotoxy(2,16);  			//borde inferior
	int m;
	for (m=0; m<68; m++)
	printf("%c",205); 
	
	gotoxy(70,16);	printf("%c",188);		//esq inf der
	//fin dibujo de marco
}


void dibujarMarco2() {
	system ("color 0a");
	//inicio dibujo de marco
	gotoxy(1,1); printf("%c",201); 		//esq sup izq    
  	
  	int i; 					//borde superior
	gotoxy(2,1);
	
	for (i=0; i<68; i++) 
	  	printf("%c",205); 
  	
  	int xVi=1, yVi=2;  		//vertical izquierda
	int j;					
	for (j=0; j<4; j++){
		gotoxy(xVi,yVi);	
		printf("%c",186);  
		yVi= yVi+1;
	}
	
	gotoxy(70,1);	printf("%c",187);		//esq sup der
	 		
	int xVd=70, yVd=2;		//vertical derecha
	int k;					
	for (k=0; k<4; k++){
		gotoxy(xVd,yVd);	
		printf("%c",186);  
		yVd= yVd+1;
	}
	
	gotoxy(1,6);	printf("%c",200);		//esq inf izq
	gotoxy(70,6);	printf("%c",188);		//esq inf der
	
	gotoxy(2,6);  			// Borde inferior
	int l;
	for (l=0; l<68; l++)
	printf("%c",205);  
	//fin dibujo de marco2
}

