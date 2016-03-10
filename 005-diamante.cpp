#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string rellenar(int x, char l);
int main(int argc, char const *argv[]){
	int n = 0;
	do{
		cout << "ingrese el tamaño del diamante: " << endl;
		cin >> n;
	}while(n % 2 == 0);
	int k = floor(n/2);
	for (int i = 1, j = n; i <= n; i++, j--){
		if(i<= j){
			cout << rellenar(k, ' ')<< rellenar(((2*i)-1), '*') << endl;
			k--;
			if(k == -1) k = 1;
		}else{
			cout << rellenar(k, ' ')<< rellenar(((2*j)-1), '*') << endl;
			k++;
		}
	}
	return 0;
}
string rellenar(int x, char l){
	string a = "";
	for (int i = 1; i <= x; i++) a += l;
	return a;
}