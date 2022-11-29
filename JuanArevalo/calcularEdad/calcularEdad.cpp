#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int JDAB_aa, JDAB_ma, JDAB_da, JDAB_an, JDAB_mn, JDAB_dn, JDAB_a, JDAB_m, JDAB_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> JDAB_aa >> JDAB_ma >> JDAB_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> JDAB_an >> JDAB_mn >> JDAB_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (JDAB_da > JDAB_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        JDAB_d = JDAB_da - JDAB_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        JDAB_da = JDAB_da + 30;
        JDAB_ma = JDAB_ma - 1;
        JDAB_d = JDAB_da - JDAB_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (JDAB_ma > JDAB_mn)
    {

        JDAB_m = JDAB_ma - JDAB_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        JDAB_ma = JDAB_ma + 12;
        JDAB_aa = JDAB_aa - 1;
        JDAB_m = JDAB_ma - JDAB_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    JDAB_a = JDAB_aa - JDAB_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << JDAB_a << " años, " << JDAB_m << " meses," << JDAB_d << " dias" << endl;
    return 0;
}