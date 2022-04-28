// Autor: Miguel Dussán

// Escriba un programa que simule el lanzamiento de un dado

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	//Inicialización de la variable con el resultado
	//del lanzamiento de un dado
	//La fórmula mostrada utiliza un escalamiento del número generado
	//de forma aleatoria.
	// rand () % 6 genera un número entre el 0 y el 5, pero como un dado
	//muestra un resultado entre 1 y 6, se le adiciona a este valor 1.

	int resultado = rand () % 6 + 1;
	
	cout << "El dado muestra el número "<<resultado;

	return 0;
} 