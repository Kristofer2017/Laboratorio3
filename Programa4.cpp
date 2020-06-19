#include "iostream"
#include "string"

using namespace std;

int main (void)
{
    string nombre;
    double precio, cantidad, total;

    cout << endl << "Se realizara el calculo de la cantidad total que se ha gastado" << endl << endl;
    cout << "Ingresar el nombre del producto: " ;
    cin >> nombre;

    cout << endl << "Ingresar el precio de dicho producto(precio individual): ";
    cin >> precio;

    cout << endl << "Ingresar la cantidad de producto(numreo de unidades sin magnitud): ";
    cin >> cantidad;

    total = precio * cantidad;

    cout << endl << endl;
    cout << "El total de su compra es de: " << total << " dolares. Gracias por su compra :D";
    cout << endl << endl;

    return 0;
}