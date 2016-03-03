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
//opción2
//int main(int argc, char const *argv[]){
//	int a = 0,b = 0,c = 0,d = 0;
//	bool A = true;
//	while(A){
//		cout << "ingrese un numero:" << endl;
//		cin >> a;
//		c = a;
//		b++;
//		if (a == 0)
//		{
//			cout << "El promedio es: " << d << endl;
//			A = false;
//			b--;
//		}
//		d = c/b;
//	}
//	return 0;
//}
