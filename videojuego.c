//#include <my_global.h>
#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	MYSQL *cone;
	int err;
	// Estructura especial para almacenar resultados de consultas 
	MYSQL_RES *resultado;
	MYSQL_ROW row;
	

//Primero creamos una conexion con nuestro SQL

cone = mysql_init(NULL);
	if (cone==NULL) {
		printf ("Ha habido un error al crear la conexion: %u %s\n", 
				mysql_errno(cone), mysql_error(cone));
		exit (1);
	}
	
	//A continuacion iniciamos la conexion con nuestro SQL
	
	cone = mysql_real_connect (cone, "localhost","root", "mysql", "videojuego",0, NULL, 0);
	if (cone==NULL) {
		printf ("Ha habido un error a la hora de inicializar la conexion: %u %s\n", 
				mysql_errno(cone), mysql_error(cone));
		exit (1);
	}
	
	//Declaramos la variable del nombre del jugador
	
	char nombrej [25];
	
	
	//Preguntamos el nombre del jugador al usuario
	printf ("Escribe el nombre del jugador del cual desea saber las partidas jugadas:\n"); 
	scanf ("%s", nombrej);

   //Declaramos la consulta 
	char con [80];
	
	//Realizamos la consulta para saber cuantas partidas ha jugado el nombre escrito por el usuario
	
	strcpy (con,"SELECT partidas_jugadas FROM jugador WHERE jugadores.nombre = '");
	strcat (con, nombrej);
	strcat (con,"'");
	
	err=mysql_query (cone, consulta);
	if (err!=0) {
		printf ("Ha habido un error al consultar datos en la base %u %s\n",
				mysql_errno(cone), mysql_error(cone));
		exit (1);
	}
	
	
	res = mysql_store_result (cone);
	
	row = mysql_fetch_row (res);
	
	if (row == NULL)
		printf ("Ha habido un problema y no se ha podido obtener los datos en la consulta \n");
	else
		while (row !=NULL) {
			//Vemos que obtenemos las partidas jugadas del jugador en la columna 0
			printf ("%s\n", row[0]);
			// Ahora obtenemos la fila siguiente
			row = mysql_fetch_row (res);
	}
	
	mysql_close (cone);
	exit(0);


}
	
	
