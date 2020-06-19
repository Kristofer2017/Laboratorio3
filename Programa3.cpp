#include "iostream"
#include "cmath"

using namespace std;

int main (void)
{
    float a, b, c;
    float x1, x2;

    cout << endl << "Se calculara el resultado de las raices de x a partir de la formula cuadratica" << endl;

    cout << endl << "Ingresar el valor de a: ";
    cin >> a;
    cout << endl << "Ingresar el valor de b: ";
    cin >> b;
    cout << endl << "Ingresar el valor de c: ";
    cin >> c;

    x1 = ((-1*b)/(2*a))+((sqrt(pow(b,2)-4*a*c))/(2*a));
    x2 = ((-1*b)/(2*a))+((sqrt(pow(b,2)-4*a*c))/(-2*a));

    cout << endl << "El valor de x1 es(tomando el signo positivo): " << x1;
    cout << endl << "El valor de x2 es(tomando el signo negativo): " << x2;

    cout <<endl;

    return 0;
}