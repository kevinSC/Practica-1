#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int c;
	cout << "por favor ingrese numero que desea elevar:" << endl;
	cin >> c;
	for (int i = 1; i < 6; i++)
		cout << c << "^" << i << " = " << pow(c, i) << endl;
	return 0;
}