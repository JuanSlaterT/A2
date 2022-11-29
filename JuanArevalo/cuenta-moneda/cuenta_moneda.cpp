#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float JDAB_x,JDAB_s=0,JDAB_s1=0,JDAB_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int JDAB_i=0,JDAB_l,JDAB_i1=0,JDAB_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>JDAB_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>JDAB_x; // determinamos al usuario que ingrese la variable de x
	JDAB_i=JDAB_i+1; // hacemos los respectivos cálculos
	JDAB_s=JDAB_s+JDAB_x;
	if(JDAB_x==1){ // Condicional dependiente del cálculo anterior
		JDAB_i1=JDAB_i1+1;
		JDAB_s1=JDAB_s1+JDAB_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		JDAB_i5=JDAB_i5+1;
		JDAB_s5=JDAB_s5+JDAB_x;
	}

	}while(JDAB_i<JDAB_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<JDAB_i<<endl;
	cout<<"El valor es: "<<JDAB_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JDAB_i1<<endl;
	cout<<"El valor es: "<<JDAB_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JDAB_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JDAB_s5<<endl;
	return 0;
}