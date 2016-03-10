#include <iostream>
using namespace std;
//opción1
int main(int argc, char const *argv[]){
	double n = 0, p = 0;
	int c = 0;
	do{
		cout << "por favor ingrese un numero:" << endl;
		cin >> n;
		p += n;
		c++;
	}
	while(n != 0);
	cout << "el promedio es: " << p/c << endl;
	return 0;
}
