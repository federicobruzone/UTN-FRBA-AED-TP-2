/* UTN-FRBA-AED
 * TP Nº 2: Paridad de enteros
 * Alumno: Federico León Bruzone [155-683.6] 
 * Última actualización: 22/04/2015
 */ 

#include <iostream>

void imprimBanner()
{
	using namespace std;

	cout << "\t+---------------------------------+" << endl;
	cout << "\t|Algoritmos y Estructuras de Datos|" << endl;
	cout << "\t|UTN-FRBA-Curso K1091             |" << endl;
	cout << "\t|TP No 2 - Paridad de enteros     |" << endl;
	cout << "\t+---------------------------------+\n\n" << endl;
	
}

int main() {
	
	using namespace std;
	int x;

	imprimBanner();
	cout << "Inserte el numero cuya paridad desea determinar: ";
	cin >> x;
	
	if (x % 2 == 1) {cout << "No es par";} 
	else {cout << "Es par";}
}
