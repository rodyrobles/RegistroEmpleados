/*
Programa: menuRegistroEmpleadosV1.0.c
Programador: Rodolfo Gutierrez Robles
Descripción: programa para el registro de empleados 
Fecha de creación: 20 febrero, 2018
Última modificación: 1 marzo, 2018
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void dibujarMarco();
void dibujarMarco2();



struct empleado {
		char nombreApellidos[50], direccion[60], area[30];
		int claveEmpleado;
		float sueldoDiario;
	} empleados[2]; // para pruebas, despues cambiar a 10



int main () {
	
	system ("color 0a");
	int select1, select2, select3, i, contador=0, clave;
	
		
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
					
					
					
					for (i=0; i<2; i++){ //para pruebas 2, despues cambiar a 10
					
					do {
						system("cls");
						dibujarMarco2();
						gotoxy(25,2); printf("RobleSys, S.A. de C.V.");
						gotoxy(15,3); printf("Programa para el registro de empleados");
						highvideo();textbackground(GREEN);
						gotoxy(25,5);  printf("Captura de datos\n\n");
						lowvideo();textbackground(BLACK);
						
						
						
						printf("\nIngresar clave de empleado, 4 digitos: ");
						scanf("%i",&clave);
					
					}
					
					while (clave<999 || clave>9999); 	
					empleados[i].claveEmpleado = clave;
					printf("\nIngresar nombre completo del empleado #%i: ",i+1);
					fflush(stdin);
					gets(empleados[i].nombreApellidos);
					printf("\nIngresar direccion del empleado: \n");
					gets(empleados[i].direccion);
					printf("\nDireccion en la que labora: ");
					printf("\n1) Administracion");
					printf("\n2) Finanzas");
					printf("\n3) Recursos Humanos");
					printf("\n4) Almacen");
					printf("\n5) Ventas");
					printf("\nSeleccione una opcion: ");
					printf("\nIngresar sueldo diario: ");
					scanf("%f",&empleados[i].sueldoDiario);
					
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
					gotoxy(25,3); printf("RobleSys, S.A. de C.V.");
					gotoxy(15,5); printf("Programa para el registro de empleados");
					highvideo();textbackground(GREEN);
					gotoxy(25,8);  printf("Consulta de datos\n\n");
					lowvideo();textbackground(BLACK);
					
					
					
					
					
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

