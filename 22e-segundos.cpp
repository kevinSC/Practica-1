#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int seg = 0;
	int hora = 0;
	int minuto = 0;	
	cout << "por favor ingresa los segundos:" << endl;
	cin >> seg;
	hora = int(seg/3600);
	seg = seg % 3600;
	minuto = int(seg / 60);
	seg = seg % 60;
	cout << hora <<":" << minuto << ":" << seg << endl;
	return 0;
}