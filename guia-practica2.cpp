#include <stdio.h> 
#include <stdlib.h>
#include <pthread.h> 
#include <unistd.h> 
 #include<windows.h>
#include <string.h>
#include <time.h>
int cambiarColor( int semaforo )
{
if( semaforo == 1 )
{
semaforo = 0; 
}
else
{
semaforo = 1;
}
return semaforo;
} 
int cambiarColor( int );
void *verde(void*); 
void *naranja(void*); 
void *rojo(void*);
	int verdes;
	int amarrillo;
	int rojos;
void *verde(void *tid)
{
printf( "Introduzca el tiempo del color Verde" );
scanf( "%d", &verdes);
	printf( "Introduzca el tiempo del color Amarillo" ); 
scanf( "%d", &amarrillo);
	printf( "Introduzca el tiempo del color Rojo" ); 
scanf( "%d", &rojos);
system("cls"); 
system("color A0"); 
Sleep(verdes);
}

void *naranja(void *tid)
{
system("cls"); 
system("color E0"); 
Sleep(amarrillo);
}



