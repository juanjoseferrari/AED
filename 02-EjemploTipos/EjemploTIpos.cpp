//Trabajo Juan Jose Ferrari
//Mostrar: Bool, Char, Unsigned, Int, Double y String

#include <iostream>
#include <assert.h>
using namespace std;

main(){
    //INTEGER (int) puede ser cualquier numero entero
    int uno = 1; 
    int dos(2);
    int tres{3};
    int suma;
    suma = 1+2+3;
    assert (uno=1);
    cout <<uno<<" + "<<dos<<" + "<<tres<<" = "<<suma<<"\n";
    //BOOLEAN (bool) can represent one of two states: true(1) or false(0)
    bool verdadero = true;
    bool falso = false;
    assert (verdadero==1);
    assert (falso==0);
    cout <<verdadero<<" y "<<falso<<"\n";
    //CHARACTER (char) cadena de caracteres. char <identificador> [<longitud máxima>];
    char mi_nombre[10] = "Juan";
    char inicial='J';
    assert (inicial+1=='K');
    cout<<mi_nombre<<"\n";
    //UNSIGNED (unisgned) sin signo = siempre positivos
    unsigned x=-1;
    int y=-1;
    cout<<x<<" y "<<y<<"\n";
    //DOUBLE (double) o real, tiene una parte fraccionaria
    double numero_real = 3.14;
    assert (numero_real= 3.14);

    
    cout << "\nNingun assert freno el programa, por lo que los tipos de datos enunciados no presentaron ningun error";
}   