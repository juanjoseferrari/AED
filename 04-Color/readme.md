# TIPO COLOR (Trabajo 13)

### Objetivo
Demostrar capacidad de construccion de tipos compuestos basados en tipos existentes atómicos.

### Problema
Diseñar un tipo de color basado en el modelo RGB, con tres canales de 8 bits. Todo color está compuesto por tres componentes: intensidad de _red_, de _green_ y de _blue_. Cada intensidad está en el rango [0,255]. Definir los valores para rojo, azul, verde, cyan, magenta, amarillo, negro y blanco. Dos colores se pueden mezclar, lo cual produce un color que tiene el promedio de intensidad para cada componente.

### Restricciones
- Las operaciones de proyección para red, green y blue se implementan con acceso directo a los componentes, no es necesario definir getters especiales. Por la misma razón, los setters no son necesarios.
- Utilizar el tipo uint8_t de cstdint, si no es posible, utilizar unsigned chart.
- Los colores primarios, secundarios, negro y blanco deben implementarse como ocho variables declaradas fuera de main y de toda función, con el calificador const para que no puedan modificarse.
- Implementar la operación IsIgual que retorna true si un color es igual a otro, si no, false

### Extra
Rojo = RGB(255,0,0)
Verde = RGB(0,255,0)
Azul = RGB(0,0,255)
Negro = RGB(0,0,0)
Blanco = RGB(255,255,255)
____

### Especificación matemática de color (por comprensión)
Color = {(r,g,b)/r,g,b∈N[0,255]}

### Pruebas
Struct color{unsigned char r,g,b;};
color rojo{255, 0, 0};
color negro{0, 0, 0};
color blanco{255, 255, 255};
assert(255 == rojo.r);
assert(0 == negro.r);
assert(0 == negro.g);
assert(0 == negro.b);
assert(0 != blanco.r);
assert(255 == blanco.r);

