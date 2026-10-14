// Recursividad_y_iteracion_C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int sumaRecursiva(int n) // solucion recursiva
{
	if (n <= 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n & 10;
}

int sumaIterativa(int n) // solucion iterativa
{
	int suma = 0;
	
	while (n > 9)
	{
		suma += n % 10;
		n /= 10;
	}
	return (suma + n);
}

int main() {
	int cantidad, numero;


	cout << "¿Cuantos numeros ingresara?\n";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) {
		cout << "\nIngresa el numero " << i + 1 << ": ";
		cin >> numero;

		cout << "Suma Recursiva: " << sumaRecursiva(numero) << endl;
		cout << "Suma Interativa: " << sumaIterativa(numero) << endl;

	}
	return 0;
}