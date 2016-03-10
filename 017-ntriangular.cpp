#include <iostream>
using namespace std;

int ndivisors(int a);
int main(int argc, char const *argv[]){
	int k = 0, a = 0, divisores = 0, tnumber =0;
	cout << "por favor ingrese k(numero de divisores de x numero triangular): ";
	cin >> k;
	while (k != divisores && divisores <= k){
		tnumber = (a*(a+1))/2;
		divisores = ndivisors(tnumber);
	 	a ++;
	}
	if (divisores == k)
		cout << "el primer numero triangular que tiene " << k << " divisores es: " << tnumber << endl;
	else
		cout << "no existe numero traingular con " << k << " divisores" << endl;
	return 0;
}
int ndivisors(int a){
	int c = 1;
	for (int i = 1; i < a; i++){
		if (a % i == 0)
			c ++;
	}
	return c;
}