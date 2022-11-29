#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float JDAB_x,JDAB_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int JDAB_i=0,JDAB_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>JDAB_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>JDAB_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>JDAB_x; // determinamos al usuario que inicialice la variable 
	JDAB_i=JDAB_i+1; //  Realizamos las respectivas operaciones..
	JDAB_s=JDAB_s-JDAB_x;

	}while(JDAB_i<JDAB_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<JDAB_s<<endl;
	return 0;
}