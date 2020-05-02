/*
HOJA DE TRABAJO #3

Ejercicio # 3:

Un empresa que se dedica a la venta de seguros de vehiculos, calcula el importe
según el modelo y color del automovil, asi como la edad del conductor.

Modelo       Color            Precio
A            Blanco           240.50
             Metalizado       330.00
             Otros            270.50
             
B            Blanco           300.00
             Metalizado       360.50
             Otros            330.00
           
Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65    0%
>65                   30%

Determine el importe a pagar mostrandolo en pantalla según los datos del vehículo (modelo y color)
y la edad del conductor.

Grabe los datos a un archivo.
*/


#include <iostream>
using namespace std;
int main(){
int modelocolor = 0;
int edad = 0;
float incremento =0;
float preciomodelo = 0;
float preciototal = preciomodelo * incremento;

cout<<"Ingrese  la edad del cliente:  "<<endl;
cin>>edad;

	if(edad < 31){
	incremento += 0.25;
}
	else if(edad > 61){
	incremento += 0.30;
	}
	else {
	incremento += 0;
}

cout<<"Ingrese el modelo y color del Vehiculo  \nModelo A Blanco=1 \nModelo A Metalizado=2 \nModelo A Otros=3 \nModelo B Blanco=4 \nModelo B Metalizado=5 \nModelo B Otros=6:  "<<endl;
cin>>modelocolor;

	if(modelocolor ==1){
	preciomodelo += ((240.50*incremento)+240.50);
}
	else if(modelocolor == 2){
	preciomodelo += ((330.00*incremento)+330.00);
	}
	else if(modelocolor == 3){
	preciomodelo += ((270.50*incremento)+270.50);
}
	else if(modelocolor == 4){
	preciomodelo += ((300.00*incremento)+300);
	}
	else{if(modelocolor == 5){
	preciomodelo += ((360.50*incremento)+360.50);
}
	else if(modelocolor == 6){
	preciomodelo +=((330.00*incremento)+330);
	}
	else{
	 cout<<"\nCodigo de Modelo y color no existe";
}
}

cout.precision(5);
cout<<"\nEl precio para el seguro es:  "<<preciomodelo;
return 0;

}
