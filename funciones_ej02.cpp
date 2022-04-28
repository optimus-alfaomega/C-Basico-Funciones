// Autor: Miguel Dussán

//Este programa redondea un número hacia arriba y hacia abajo

#include <iostream>

#include <cmath> //Biblioteca de funciones matemáticas

using namespace std;

int main(){

	double numero = 0;
	
	cout<<"Ingrese un número ";
	
	cin>>numero;
	
	
	cout << "El número ingresado es "<<numero << endl;
	
	//uso de la función piso
	cout<< "El número redondeado hacia abajo es "<< floor(numero) << endl;
	
	//uso de la función techo
	cout<< "El número redondeado hacia arriba es "<< ceil(numero) << endl;
	
	return 0;
}
