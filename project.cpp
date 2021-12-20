#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int op;
	float a, b, c, d, m, n, l, s, x, res;
	do
	{
		system("CLS");
		printf ("********Menu Principal********\n");
		printf ("0. Calculadora.\n");
		printf ("1. Ejercicios con if-else.\n");
		printf ("2. Ejercicios con while.\n");
		printf ("3. Ejercicios con for.\n");
		printf ("9. Finalizar programa.\n");
		printf ("Ingrese la funcion a ejecutar: ");
		scanf ("%d",&op);
		system("CLS");
		while ((op<0||op>3)&&op!=9)
		{
			system("CLS");
			printf ("Opcion incorrecta, intente de nuevo.\n\n");
			printf ("********Menu Principal********\n");
			printf ("0. Calculadora.\n");
			printf ("1. Ejercicios con if-else.\n");
			printf ("2. Ejercicios con while.\n");
			printf ("3. Ejercicios con for.\n");
			printf ("9. Finalizar programa.\n");
			printf ("Ingrese la funcion a ejecutar: ");
			scanf ("%d",&op);
			system("CLS");
		}
		switch (op)
		{
			case 0:
				do 
				{
					system("CLS");
					printf ("*****Calculadora*****\n");
					printf ("1. Suma.\n");
					printf ("2. Resta.\n");
					printf ("3. Multiplicacion.\n");
					printf ("4. Division.\n");
					printf ("5. Potencia.\n");
					printf ("6. Raiz cuadrada.\n");
					printf ("8. Menu Principal.\n");
					printf ("9. Finalizar programa.\n");
					printf ("Ingrese la operacion a realizar: ");
					scanf ("%d",&op);
					system ("CLS");
					while ((op<0||op>6)&&op!=8&&op!=9)
					{
						system("CLS");
						printf ("Opcion incorrecta, intente de nuevo.\n\n");
						printf ("*****Calculadora*****\n");
						printf ("1. Suma.\n");
						printf ("2. Resta.\n");
						printf ("3. Multiplicacion.\n");
						printf ("4. Division.\n");
						printf ("5. Potencia.\n");
						printf ("6. Raiz cuadrada.\n");
						printf ("8. Menu Principal.\n");
						printf ("9. Finalizar programa.\n");
						printf ("Ingrese la operacion a realizar: ");
						scanf ("%d",&op);
						system ("CLS");
					}
					switch (op)
					{
						case 1:
							printf ("****Suma****\n");
							printf("Ingrese un numero: ");
							scanf("%f",&a);
							printf("Ingrese otro numero: ");
							scanf("%f",&b);
							res=a+b;
							printf("%.2f + %.2f = %.2f\n\n",a,b,res);
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
						case 2:
							printf ("****Resta****\n");
							printf("Ingrese un numero: ");
							scanf("%f",&a);
							printf("Ingrese otro numero: ");
							scanf("%f",&b);
							res=a-b;
							printf("%.2f - %.2f = %.2f\n\n",a,b,res);
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
						case 3:
							printf ("****Multiplicacion****\n");
							printf("Ingrese un numero: ");
							scanf("%f",&a);
							printf("Ingrese otro numero: ");
							scanf("%f",&b);
							res=a*b;
							printf("%.2f * %.2f = %.2f\n\n",a,b,res);
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
						case 4:
							printf ("****Division****\n");
							printf("Ingrese el dividendo: ");
							scanf("%f",&a);
							printf("Ingrese el divisor: ");
							scanf("%f",&b);
							if(b!=0)
								{
									res=a/b;
									printf("%.2f / %.2f = %.2f\n\n",a,b,res);
								}
								else
								{
									printf("La division para cero no esta definida.\n\n");
								}
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
						case 5:
							printf ("****Potencia****\n");
							printf("Ingrese la base: ");
							scanf("%f",&a);
							printf("Ingrese el exponente: ");
							scanf("%f",&b);
							res=pow(a,b);
							printf("%.2f ^ %.2f = %.2f\n\n",a,b,res);
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
						case 6:
							printf ("****Raiz Cuadrada****\n");
							printf("Ingrese un numero: ");
							scanf("%f",&a);
							if (a>=0)
								{
									res=sqrt(a);
									printf("La raiz cuadrada de %.2f es %.2f.\n\n",a,res);
								}
								else
								{
									printf("Esta calculadora no esta definida para numeros imaginarios\n\n");
								}
							printf ("Si desea realizar otra operacion presione 7. Para salir al menu presione 8: ");
							scanf ("%d",&op);
							break;
					}
				}while (op==7);
				break;
			case 1:
				do
				{
					system("CLS");
					printf ("*****Ejercicios if - else*****\n");
					printf ("1. Mayor de 3 numeros.\n");
					printf ("2. Bebe, ni¤o, adolescente o adulto.\n");
					printf ("3. Promedio para aprobar F. de Programacion.\n");
					printf ("4. Numero positivo o negativo.\n");
					printf ("5. Tipo de triangulo.\n");
					printf ("8. Menu Principal.\n");
					printf ("9. Finalizar programa.\n");
					printf ("Ingrese el programa a ejecutar: ");
					scanf ("%d",&op);
					system ("CLS");
					while ((op<0||op>5)&&op!=8&&op!=9)
					{
						system("CLS");
						printf ("Opcion incorrecta, intente de nuevo.\n\n");
						printf ("*****Ejercicios if - else*****\n");
						printf ("1. Mayor de 3 numeros.\n");
						printf ("2. Bebe, ni¤o, adolescente o adulto.\n");
						printf ("3. Promedio para aprobar F. de Programacion.\n");
						printf ("4. Numero positivo o negativo.\n");
						printf ("5. Tipo de triangulo.\n");
						printf ("8. Menu Principal.\n");
						printf ("9. Finalizar programa.\n");
						printf ("Ingrese el programa a ejecutar: ");
						scanf ("%d",&op);
						system ("CLS");
					}
					switch (op)
					{
						case 1:
							do
							{
								system ("CLS");
								printf ("*****Mayor de 3 numeros*****\n");
								printf ("Ingrese tres numeros:\n");
								scanf ("%f %f %f",&a,&b,&c);
								system ("CLS");
								if (a>b&&a>c)
								{
									printf ("El numero mayor es: %.0f\n\n",a);
								}
								if (b>a&&b>c)
								{
									printf ("El numero mayor es: %.0f\n\n",b);
								}
								if (c>b&&c>a)
								{
									printf ("El numero mayor es: %.0f\n\n",c);
								}
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;
						case 2:
							do
							{
								system ("CLS");
								printf ("*****Bebe, ni¤o, adolescente o adulto*****\n");
								printf ("Ingrese su edad: ");
								scanf ("%f",&a);
								while (a<=0)
								{
									printf ("Lo siento, te has equivocado.\n");											
									printf ("Ingrese su edad: ");
									scanf ("%f",&a);
								}
								if (a>0&&a<=3)
								{
									printf ("Eres un bebe.\n\n");
								}
								else 
								{
									if (a>3&&a<=12)
									{
										printf ("Eres un ni¤o.\n\n");
									}
									else 
									{
										if (a>12&&a<=18)
										{
											printf ("Eres un adolescente.\n\n");
										}
										else 
										{
											if (a>18)
											{
												printf ("Eres un adulto.\n\n");
											}
										}
									}
								}	
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8:");
								scanf ("%d",&op);	
							}while (op==6);
							break;
						case 3:	
							do
							{
								system ("CLS");
								printf ("*****Promedio para aprobar F. de Programacion*****\n");
								printf("Ingrese la nota 1: ");
								scanf ("%f",&a);
								printf("Ingrese la nota 2: ");
								scanf ("%f",&b);
								printf("Ingrese la nota 3: ");
								scanf ("%f",&c);
								res=(a+b+c)/3;
								if(res>=7 && res<=10)
								{
									printf ("El estudiante APROBO con %.2f sobre 10.\n\n",res);
								}
								else 
								{
									if(res<7 && res>=4)
									{
										printf ("El estudiante esta en SUPLETORIO con %.2f sobre 10.\n\n",res);
									}
									else
									{
										printf ("El estudiante REPROBO con %.2f sobre 10.\n\n",res);
									}
								}
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);	
							}while (op==6);
							break;
						case 4:
							do
							{
								system ("CLS");
								printf ("*****Numero positivo o negativo*****\n");
								printf ("Ingrese un numero: ");
								scanf ("%f",&a);
								if (a>=0)
								{
									printf ("El numero %.0f es positivo.\n\n",a);
								}
								else
								{
									printf ("El numero %.0f es negativo.\n\n",a);
								}
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;
						case 5:
							do
							{
								system ("CLS");
								printf ("*****Tipo de triangulo*****\n");
								printf ("Ingrese el lado 1: ");
								scanf ("%f",&a);
								printf ("Ingrese el lado 2: ");
								scanf ("%f",&b);
								printf ("Ingrese el lado 3: ");
								scanf ("%f",&c);
								if (a==b&&a==c)
								{
									printf ("Los lados corresponden a un triangulo equilatero.\n\n");
								}
								else
								{
									if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
									{
										printf ("Los lados corresponden a un triangulo isoceles.\n\n");
									}
									else
									{
										printf ("Los lados corresponden a un triangulo escaleno.\n\n");
									}
								}
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;
					}
				}while (op==7);
				break;
			case 2:
				do
				{
					system("CLS");
					printf ("*****Ejercicios con while*****\n");
					printf ("1. Suma de n numeros, promedio y desviacion estandar.\n");
					printf ("2. Tablas de multiplicar dado un numero n.\n");
					printf ("8. Menu Principal.\n");
					printf ("9. Finalizar programa.\n");
					printf ("Ingrese el programa a ejecutar: ");
					scanf ("%d",&op);
					system ("CLS");
					while ((op<0||op>2)&&op!=8&&op!=9)
					{
						system("CLS");
						printf ("Opcion incorrecta, intente de nuevo.\n\n");
						printf ("*****Ejercicios con while*****\n");
						printf ("1. Suma de n numeros, promedio y desviacion estandar.\n");
						printf ("2. Tablas de multiplicar dado un numero n.\n");
						printf ("8. Menu Principal.\n");
						printf ("9. Finalizar programa.\n");
						printf ("Ingrese el programa a ejecutar: ");
						scanf ("%d",&op);
						system ("CLS");
					}
					switch (op)
					{
						case 1:
							do
							{
								system ("CLS");
								printf ("*****Suma de n numeros, promedio y desviacion estandar*****\n");
								printf ("Ingrese varios numeros, para finalizar presione 0.\n");
								scanf ("%f",&a);
								res=0;
								b=0;
								c=0;
								x=0;
								d=0;
								n=0;
								while (a!=0)
								{
									res=res+a;
									b++;
									n=n+pow(a,2);
									scanf ("%f",&a);
								}
								printf ("La suma de %.0f numeros es: %.1f\n",b,res);
								c=res/b;
								printf ("El promedio es: %.2f\n",c);
								x=(pow(c,2))*b;
								d=sqrt(((n-(2*res*c)+x)/b));
								printf ("La desviacion estandar es: %.2f\n",d);
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios if-else, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);		
							break;
						case 2:
							do
							{
								system ("CLS");
								printf ("*****Tablas de multiplicar dado un numero n*****\n");
								printf ("Ingrese un numero cualquiera para mostrar su tabla de multiplicar: ");
								scanf ("%f",&a);
								printf ("Tabla del %.0f\n",a);
								b=1;
								while(b<=12)
								{
									c=a*b;
									printf("%.0f * %.0f = %.0f\n",a,b,c);
									b++;
								} 
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios while, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;					
					}
				}while (op==7);
				break;
			case 3:
				do
				{
					system("CLS");
					printf ("*****Ejercicios for*****\n");
					printf ("1. Subconjuntos no vacios de un numero dado.\n");
					printf ("2. Rombo de dimension n.\n");
					printf ("8. Menu Principal.\n");
					printf ("9. Finalizar programa.\n");
					printf ("Ingrese el programa a ejecutar: ");
					scanf ("%d",&op);
					system("CLS");
					while ((op<0||op>2)&&op!=8&&op!=9)
					{
						system("CLS");
						printf ("Opcion incorrecta, intente de nuevo.\n\n");
							printf ("*****Ejercicios for*****\n");
						printf ("1. Subconjuntos no vacios de un numero dado.\n");
						printf ("2. Rombo de dimension n.\n");
						printf ("8. Menu Principal.\n");
						printf ("9. Finalizar programa.\n");
						printf ("Ingrese el programa a ejecutar: ");
						scanf ("%d",&op);
						system ("CLS");
					}
					switch (op)
					{
						case 1:
							do
							{
							system ("CLS");
							printf ("*****Subconjuntos no vacios de un numero n*****\n");
							printf ("Ingrese un numero: ");
							scanf ("%f",&n);
							for (a=1;a<=n;a++)
							{	
								for (b=a;b<=n;b++)
								{
									for(c=a;c<=b;c++)
									{
									printf("%.0f ", c);	
									}
								printf ("\n");
								}
								l=a+2;
								do 
								{
									for (m=l;m<=n;m++)
									{
										printf("%.0f ", a);
										for (s=l;s<=m;s++)
										{
											printf ("%.0f ", s);
										}				
										printf ("\n");				
									}
								l++;
								} while (l<=n);
							}
								printf ("\n");
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios for, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;
						case 2:
							do
							{
								system ("CLS");
								printf ("*****Rombo de dimension n.*****\n");
								printf("Ingrese la dimension: \n");
								scanf("%f",&n);
								for (a=1;a<=n;a++)
								{
									for (b=1;b<=n-a;b++)
									{
										printf(" ");
									}
									for (b=1;b<=2*a-1;b++)
									{
										printf("*");
									}
									printf("\n");
								}
								for (a=n-1;a>=1;a--)
								{
									for (b=1;b<=n-a;b++)
									{
										printf(" ");
									}
									for (b=1;b<=2*a-1;b++)
									{
										printf("*");
									}
									printf("\n");
								}
								printf ("Para ejecutar nuevamente el programa, presione 6.\n");
								printf ("Si desea regresar al menu de ejercicios for, presione 7.\n");
								printf ("Para salir al menu principal presione 8: ");
								scanf ("%d",&op);
							}while (op==6);
							break;
					}
				}while(op==7);
				break;
		}
	}while (op==8);
	printf ("Usted ha salido del programa.");
	return 0;
}
