#include <iostream>
using namespace std;
int Collatz(int s);
void Pcollatz(int s);
int main(int argc, char const *argv[]){
	int k = 0;
	int semilla = 0;
	int collatz = 0;
	cout << "por favor ingrese el numero k para calcular la serie de Collatz\nmas larga con una semilla menor a k: ";
	cin >> k;
	for (int i = 0; i < k; i++){
		if (Collatz(i)>collatz){
			collatz = Collatz(i);
			cout << collatz << " " << i << endl;
			semilla = i;
		}
	}
	cout << "la semilla mas pequeña que " << k << " es " << semilla << endl;
	cout << semilla << ": ";
	Pcollatz(semilla);
	cout << endl;
	cout << "longitud: " << collatz << " terminos" << endl;
	return 0;
}
int Collatz(int s){
	int c = 1;
	while(s > 1){
	    if (s % 2 == 0)
	    	s /= 2;
	    else
	    	s = (s * 3) +1;
	    c ++;
	}
	return c;
}
void Pcollatz(int s){
	int c = 1;
	while(s > 1){
	    cout << s << ", "; 
	    if (s % 2 == 0)
	    	s /= 2;
	    else
	    	s = (s * 3) +1;
	    c ++;
	}
	cout << 1;
}