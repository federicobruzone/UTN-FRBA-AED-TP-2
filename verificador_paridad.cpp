#include <iostream>

int main() {
	
	using namespace std;
	int x;
	int c = 0x1;
	
	cout << "Inserte el numero cuya paridad desea determinar: ";
	cin >> x;
	
	// Usamos el operador & (AND binario). Si el ultimo bit de la variable int "x" tiene valor
	// '1' entonces ese bit es comparado bit a bit con el int "c", todos cuyos bits tienen 
	// valor binario '0', excepto el ultimo (exponente 2^0, determina la paridad de toda la 
	// expresion). Si el int "x" es impar, la expresión (x & c) se evalua identica a "c" (0x1), 
	// que equivale al valor booleano de 'true'. En caso contrario la expresión se evalua
	// igual a 0x0, que equivale al valor booleano de 'false'.
	
	if (x & c) {cout << "No es par";} 
	else {cout << "Es par";}
}
