### Objetivo:
Demostrar el uso de operadores booleanos y expresiones complejas.

### Problema:
Dado un año, determinar si es bisiesto.

### Analisis del problema
**Hipotesis:** Dado un año determinar si es bisiesto
Para evaluar la hipotesis, contamos con las siguientes premisas:
1. Si es divisible entre 4 es bisiesto
2. Si es divisible entre 100, no es bisiesto
3. Si es divisible entre 400, es bisiesto
4. El año debe ser mayor o igual a 1582

### Modelo Ipo
![](https://raw.githubusercontent.com/juanjoseferrari/AED/master/03-Bisiesto/modeloipotp3.jpg)

### Diseño de la solucion
Se utilizaran las premisas para corroborar con un bool si el año (year) es bisiesto.
IsBisiesto: N -> B 

#### Lexico
year >= 1582 and (year%4 == 0) and ((year%100 != 0) or (year%400 == 0));

p: year es mayor o igual a 1582

q: year es divisible entre 4

r: year es divisible entre 400

s: year divisible entre 100


#### Arbol
![](https://raw.githubusercontent.com/juanjoseferrari/AED/master/03-Bisiesto/diagramaarboltp3.jpg)

### Pruebas
assert(IsBisiesto(2020));

assert (IsBisiesto(1582));

assert (not IsBisiesto(45));

assert (not IsBisiesto(1583));

assert (IsBisiesto(1900));


### 
