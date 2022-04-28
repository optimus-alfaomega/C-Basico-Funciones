## Funciones

Las funciones son un conjunto de procedimiento encapsulados en un bloque, usualmente reciben par�metros, cuyos valores utilizan para efectuar operaciones y adicionalmente retornan un valor. Esta definici�n proviene de la definici�n de funci�n matem�tica la cual posee un dominio y un rango, es decir un conjunto de valores que puede tomar y un conjunto de valores que puede retornar luego de cualquier operaci�n.

## Ejemplo

```c++
int sum(int a, int b)
{
    return a + b;
}
```

<p> e puede invocar la funci�n o llamarla desde cualquier n�mero de lugares del programa. Los valores que se pasan a la funci�n son los argumentos, cuyos tipos deben ser compatibles con los tipos de par�metro de la definici�n de funci�n. </p>

```c++
int main()
{
    int i = sum(10, 32);
    int j = sum(i, 66);
    cout << "The value of j is" << j << endl; // 108
}
```
