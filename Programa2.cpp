#include "iostream"
#include "cmath"

using namespace std;

int main (void)

{
    float radio;
    float pi = 3.1416;
    float a, p;
    //a significa area y p perimetro, lo que es lo mismo que la circunferencia

    cout << endl << "Se realizara el calculo de el area y longitud de una circunferencia" << endl << endl;
    
    cout << "Ingresar el radio: ";
    cin >> radio;

    a = ( pow (radio, 2) ) * pi;
    p = 2 * pi * radio;

    cout << endl << "El area de este circulo es: " << a << endl;
    cout << endl << "El perimetro, o longitud de la circunferencia es: " << p << endl << endl;

    return 0;
}