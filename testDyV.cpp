#include <iostream>
#include <vector>
#include "DyV.h"

int main(){
// Búqueda binaria normal con int
	std::vector<int> a{1,2,3,4,5,6};
	int X = 2;
	int ini = 0;
	int fin = 5;
	size_t b = a.size();
	if(BusquedaBinaria(X, a, ini, fin)){
		std::cout << "Sí que ha encontrado el valor" << std::endl;
	} else {
		std::cout << "No que ha encontrado el valor" << std::endl;
	}
	std::cout << "El vector es: {";
	for (int i = 0; i < b; i++){
		std::cout << a[i];
	}
	std::cout << "}" <<"\n";
// El inverso float
	std::vector<float> x{6,5,4,3,2,1};
	float A = 2;
	float Ini = 0;
	float Fin = 5;
	size_t y = x.size();
	if(BusquedaBinaria_INV(A, x, Ini, Fin)){
		std::cout << "Sí que ha encontrado el valor" << std::endl;
	} else {
		std::cout << "No que ha encontrado el valor" << std::endl;
	}
	std::cout << "El vector es: {";
	for (int i = 0; i < y; i++){
		std::cout << x[i];
	}
	std::cout << "}" <<"\n";

	return 0;
}
