// Autor: Miguel Dussán

//Este programa implementa una función que computa la adición de dos
//Números.

#include <iostream>

using namespace std;

/*
Prototipo de la función suma.
En este ejercicio la función no devuelve valores directamente, si no que
guardará el resultado de la operación en el tercer parámetro
*/

void suma(int, int, int &);

int solicitaNumero(); //prototipo de función de solicitar número

int main(){

	int n1 = 0;
	/*
	Llamado a función
	El valor que devuelve la función es almacenado en la variable
	*/
	n1 = solicitaNumero();
	
	/*
	Variable inicializada con el valor retornado por la función
	*/
	int n2 = solicitaNumero();
	
	int n3;
	
	//La función no retorna valores
	//Para este problema, el resultado de la suma se almacena en la tercera
	//variable
	suma(n1,n2, n3);
	
	//Mostrar resultado
	cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
	
	return 0;
}

/*
Función suma
Cuando la función no devuelve valores,
no se especifica un tipo de dato y en lugar de ello se pone la 
palabra clave void
*/

void suma(int s1, int s2, int &s3){
	
	s3=s1+s2;
	/*
	Retorno vacío
	Esto hace que termine la ejecución de la función pero no se
	devuelve ningún valor
	*/
	return;
}

//Función para mostrar un mensaje y solicitar un número
//Las funciones pueden tener argumentos vacíos
int solicitaNumero(){
	int numero = 0;
	cout<<"Ingrese un número ";
	cin>>numero;
	
	return numero;
}