#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float JDAB_x,JDAB_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int JDAB_i=0, JDAB_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de JDAB_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>JDAB_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de JDAB_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>JDAB_x;
        JDAB_i=JDAB_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        JDAB_s=JDAB_s+JDAB_x;
    }while(JDAB_i<JDAB_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<JDAB_s<<endl;
    return 0;

}