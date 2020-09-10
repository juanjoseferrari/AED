/*  NOMBRE: Celsius
*   DESCRIPCION: Este programa convierte los grados Fahrenheit ingresados por el usuario a grados Celsius
*   AUTOR: Ferrari, Juan José
*   ULTIMA MODIFICACION: 4 de Julio del 2020
*/

//PENDING: ASSERTS Y VER COMO AUTOMATIZAR VALOR EXACTO

#include <iostream>
#include <windows.h>
using namespace std;

double celsius(double f)
{
    double c;
    c=((5.0/9.0)*(f-32.0));
    return c;
}

bool AreNear (double actual, double calculated, double tolerancia=0.001)
{
    //ACTUAL: 37.7778 segun Google
    //CALCULATED: double resultado
    return ((actual>=calculated-tolerancia)&&(actual<=calculated+tolerancia));
}

int main()
{   
    double f;
    string valor;
    //float cinco=5, nueve=9, treintaydos=32, fraccion;
    //fraccion=(cinco/nueve);
    //cout << "Ingrese la temperatura en grados fahrenheit: \n";
    //cin >> f;
    double resultado = celsius (f=100);
    bool valor_ok = AreNear (37.7778,resultado,0.001);
    //c=((5.0/9.0)*(f-32.0));
    //c = ((fraccion)*(f-treintaydos));
    cout << f << " grados fahrenheit equivale a " << resultado << " grados celsius\n";
    if (valor_ok==1)
    {
        valor="si";
    }
    else
    {
        valor="no";
    }
    cout << "Calculo certero a la milesima? " << valor << endl;
    Sleep(5000);
}

