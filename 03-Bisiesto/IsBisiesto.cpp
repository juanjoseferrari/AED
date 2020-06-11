/*Trabajo Juan Ferrari 
determinar si es bisiesto el año
fecha de entrega: 11 de junio 2020*/

#include <iostream>
#include <cassert>
using namespace::std;

bool IsBisiesto(int);

bool IsBisiesto(int){
    assert(IsBisiesto(2020));
    assert (IsBisiesto(1582));
    assert (not IsBisiesto(45));
    assert (not IsBisiesto(1583));
    assert (IsBisiesto(1900));
    return 0;
}

bool IsBisiesto(int year){
    return year >= 1582 and (year%4 == 0) and ((year%100 != 0) or (year%400 == 0));
}
