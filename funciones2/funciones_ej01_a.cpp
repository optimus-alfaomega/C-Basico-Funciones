// Autor: Miguel Dussán

//Este programa implementa una función que computa la adición de dos
//Números.

#include <iostream>

using namespace std;

/*
Prototipo de la función suma.
Estos son útiles cuando se tienen muchas funciones y unas se llaman a otras.
Las partes de este prototipo son:
int : tipo de dato que retorna la función con el resultado.
suma: nombre de la función.
(int, int): tipos de datos de las variables que recibe la función como parámetro.
*/

int suma(int, int);

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
	
	//Llamado a función con dos parámetros. El valor retornado es
	//almacenado en otra función
	int n3 = suma(n1,n2);
	
	//Mostrar resultado
	cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
	
	return 0;
}

/*
Función suma
Aquí se estructura todo el código contenido en la función.
Se utiliza para escribir programas más organizados, fáciles de leer y mantener.
Las partes de la función son:
<tipo de dato de retorno> <nombre de función>(<tipo de dato parámetro> <nombre de variable parámetro>, ...)

Para esta función en particular:

int: tipo de dato que retorna la función con el resultado.
suma: nombre de la función.
(int s1, int s2): variables que recibe la función como parámetros por valor.

Dentro de llaves se escribe el código para la función.
*/

int suma(int s1, int s2){
	int s3=0;
	
	s3=s1+s2;
	/*
		Valor que retorna la función al punto del código de donde fue llamada.
	Retorna el contenido de la variable en este momento.
	La palabra clave return puede ser llamada en en más de un punto en la función
	*/
	return s3;
}

//Función para mostrar un mensaje y solicitar un número
//Las funciones pueden tener argumentos vacíos
int solicitaNumero(){
	int numero = 0;
	cout<<"Ingrese un número ";
	cin>>numero;
	
	return numero;
}
