#include "iostream"

using namespace std;

int main (void)
{
    float a, b, c, prom;
    
    cout << endl << "Se va a realizar a continuacion el promedio de tres numeros" << endl << endl;
    
    cout << "Por favor ingrese el primer numero a promediar: ";
    cin >> a;

    cout << "Ahora el segundo valor: ";
    cin >> b;

    cout << "Por ultimo ingrese el tercer valor: ";
    cin >> c;

    prom = (a+b+c)/3;
    cout << endl << "El promedio de los tres numeros es: " << prom << endl;    

    return 0;
}