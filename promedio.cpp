#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 0,b = 0,c = 0,d = 0;
	bool A = true;
	while(A){
		cout << "ingrese un numero:" << endl;
		cin >> a;
		b++;
		c = c + a;
		d = c/b;
		if (a == 0)
		{
			cout << "El promedio es: " << d << endl;
			A = false;
		}
	}
	return 0;
}