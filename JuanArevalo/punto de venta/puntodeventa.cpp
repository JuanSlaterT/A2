#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float JDAB_x, JDAB_s = 0, JDAB_vb, JDAB_piva = 12, JDAB_viva, JDAB_pdesc = 10, JDAB_vdesc, JDAB_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int JDAB_i = 0, JDAB_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> JDAB_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> JDAB_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        JDAB_i = JDAB_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        JDAB_s = JDAB_s + JDAB_x;
    } while (JDAB_i < JDAB_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    JDAB_vb = JDAB_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    JDAB_viva = JDAB_vb * JDAB_piva / 100;
    JDAB_vdesc = JDAB_vb * JDAB_pdesc / 100;
    JDAB_vn = JDAB_vb + JDAB_viva - JDAB_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << JDAB_vn << endl;
    return 0;
}