#include <vector>
#include <iostream>

template <typename T>
int BusquedaBinaria (T X, std::vector<T> V, T ini, T fin){
	if(ini > fin){
		std::cout << "No se encuentra el array" << std::endl;
	}
	T medio = (ini + fin) / 2;
	if (V[medio] == X){
		return medio;
	} else if (V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio - 1);
	} else {
		return BusquedaBinaria(X, V, medio + 1, fin);
	}
}

template <typename T>
int BusquedaBinaria_INV (T X, std::vector<T> V, T ini, T fin){
	if(ini > fin){
		std::cout << "No se encuentra el array" << std::endl;
	}
	T medio = (ini + fin) / 2;
	if (V[medio] == X){
		return medio;
	} else if (V[medio] > X){
		return BusquedaBinaria(X, V, medio +1, fin);
	} else {
		return BusquedaBinaria(X, V, ini, medio -1);
	}
}


