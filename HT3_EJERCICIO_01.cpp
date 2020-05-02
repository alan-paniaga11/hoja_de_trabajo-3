/*
HOJA DE TRABAJO #3

Ejercicio # 1:

El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.
*/

#include <iostream>
using namespace std;
int main(){
	int edad=0;
	int nacionalidad;
	float sueldofijo = 2500.00;
	float bonoextranjero = 500.00;
	float rango1 = 1400.00;
	float rango2 = 1500.00;
	float rango3 = 1200.00;
	float rango4 = 800.00;
	float nuevosueldo = 0;

cout << "\nIngrese edad de jugador: "<<endl;
    cin >> edad;
    cout << "\nIngrese 1 si es extranjero o 2 si es nacional:  "<<endl;
    cin >> nacionalidad;

    switch(nacionalidad) {
    case 1:
	if(edad <= 20){
	nuevosueldo = sueldofijo + rango1+bonoextranjero;
}
	else if(edad <= 25){
	nuevosueldo = sueldofijo + rango2 + bonoextranjero;
}
	else if(edad <= 30){
	nuevosueldo = sueldofijo + rango3 + bonoextranjero;
}
	else{
	nuevosueldo = sueldofijo + rango4 + bonoextranjero;
}
    case 2:
            
    if(edad <= 20){
	nuevosueldo = sueldofijo + rango1;
}
	else if(edad <= 25){
	nuevosueldo = sueldofijo + rango2;
}
	else if(edad <= 30){
	nuevosueldo = sueldofijo + rango3;
}
	else{
	nuevosueldo = sueldofijo + rango4;
}
    break;
    default:
    cout << "\nNacionalidad incorrecta\n";
    break;
} 

cout<<"\nEl salario del jugador es:  "<<nuevosueldo<<endl;
return 0;
}

