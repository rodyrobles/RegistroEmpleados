/*
Programa: menuRegistroEmpleadosV1.0.c
Programador: Rodolfo Gutierrez Robles
Descripción: programa para el registro de empleados 
Fecha de creación: 20 febrero, 2018
Última modificación: 3 marzo, 2018
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
	
	lowvideo();textbackground(BLACK);
	int select1, select2, select3, opc, i=0, registro=0, cicloClaveEmp, claveEmp, claveAcceso, cicloClaveAcceso;
	
	    
    cicloClaveAcceso=0;
    do {													
		
		printf("\nIngresar clave de Acceso: ");
		scanf("%i",&claveAcceso);
		
		if (claveAcceso<10000 || claveAcceso>99999) {
			cicloClaveAcceso++;
			lowvideo();textbackground(RED);
			printf("\t- Clave invalida! -");
			while (getchar() != '\n');
			lowvideo();textbackground(BLACK);
							
		}else {
			cicloClaveAcceso=2;			
				do {
	
		system ("cls");
		dibujarMarco();
	
		irMenuPrincipal();
		
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
						
						if (registro>=10) 
							printf("\n\tEl registro de empleados esta completo!");
						
						else {
	
						
							system("cls");
							dibujarMarco2();
							gotoxy(25,2); printf("RobleSys, S.A. de C.V.");
							gotoxy(15,3); printf("Programa para el registro de empleados");
							highvideo();textbackground(GREEN);
							gotoxy(25,5);  printf("Captura de datos\n\n");
							lowvideo();textbackground(BLACK);
						
						do {													
							cicloClaveEmp=0;
							printf("\nIngresar clave de empleado: ");
							scanf("%i",&claveEmp);
							
							if (claveEmp<1000 || claveEmp>9999) {
								lowvideo();textbackground(RED);
								printf("\t- Clave invalida! -");
								while (getchar() != '\n');
								lowvideo();textbackground(BLACK);
			        			
							}else {
								
		    					cicloClaveEmp=1;
		    				}
						} while (cicloClaveEmp==0);
						
						empleados[registro].claveEmpleado = claveEmp;
						printf("\nIngresar nombre completo del empleado #%i: ",registro+1);
						fflush(stdin);
						gets(empleados[registro].nombreApellidos);
						printf("\nIngresar direccion del empleado: \n");
						gets(empleados[registro].direccion);
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
								strcpy(empleados[registro].area, "Administracion" );
								break;
							case 2:
								strcpy(empleados[registro].area, "Finanzas" );
								break;
							case 3:
								strcpy(empleados[registro].area, "Recursos Humanos" );
								break;
							case 4:
								strcpy(empleados[registro].area, "Almacen" );
								break;
							case 5:
								strcpy(empleados[registro].area, "Ventas" );
								break;
						}
						printf("\nIngresar sueldo diario: ");
						scanf("%f",&empleados[registro].sueldoDiario);
						registro++;
						}
						printf("\nRegistro exitoso!");
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
		}
				
	} while (cicloClaveAcceso<2);
	

	

	
	printf("\n\n\n\n");
	system ("pause");
	return 0;
}




	void dibujarMarco() {
	int x,y;
	
	system ("color 0a");
	//inicio dibujo de marco
	gotoxy(1,1); printf("%c",201);		//esq sup izq    
  	  	  	
	for (x=2; x<70; x++) { 				//borde superior
	  	gotoxy(x,1);
		printf("%c",205);
  	  	}	
  		    		
	for (y=2; y<17; y++){ 				//vertical izquierda
		gotoxy(1,y);
		printf("%c",186); 
		}
	
	gotoxy(70,1); printf("%c",187);		//esq sup der
	 		
	for (y=2; y<17; y++){ 				//vertical derecha
		gotoxy(70,y);	
		printf("%c",186);  
		}
		
	for (x=2; x<70; x++) { 				//linea intermedia
		gotoxy(x,6);
		printf("%c",205);
		}  
		
	gotoxy(1,16); printf("%c",200);		//esq inf izq
	
	for (x=2; x<70; x++){ 				//borde inferior
		gotoxy(x,16);
		printf("%c",205); 
	}
	
	gotoxy(70,16); printf("%c",188); //esq inf der
	//fin dibujo de marco
}

void dibujarMarco2() {
	int x,y;
	
	system ("color 0a");
	//inicio dibujo de marco
	gotoxy(1,1); printf("%c",201); 		//esq sup izq    
  	
  	for (x=2; x<70; x++) { 				//borde superior
	  	gotoxy(x,1);
		printf("%c",205);
  	  	} 
  	
  	for (y=2; y<6; y++){ 				//vertical izquierda
		gotoxy(1,y);
		printf("%c",186); 
		}
  	
  	gotoxy(70,1);	printf("%c",187);		//esq sup der
	 		
	for (y=2; y<6; y++){ 				//vertical izquierda
		gotoxy(70,y);
		printf("%c",186); 
		}
		
	gotoxy(1,6);	printf("%c",200);		//esq inf izq
	gotoxy(70,6);	printf("%c",188);		//esq inf der
	
	for (x=2; x<70; x++) { 				//borde inferior
	  	gotoxy(x,6);
		printf("%c",205);
  	  	} 
	
	//fin dibujo de marco2
}

