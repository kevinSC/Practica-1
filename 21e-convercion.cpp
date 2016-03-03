#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char l;
	int L;
	cout << "por favor ingresa una letra:" << endl;
	cin >> l;
	L = int(l);
	if (L>64 && L<91)
		L += 32;
	else if(L>96 && L<123)
		L -= 32;
	l = char(L);
	cout << l << endl;
	return 0;
}