#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	char letra = ' ';
	cout << "ingrese una letra: ";
	cin  >> letra;
	string vocales = "aeiouAEIOU";
	string consonantes = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
	std::size_t encontro = consonantes.find(letra);
	if((encontro <= 41) && (encontro >= 0))
		cout << letra << " es una consonante" << endl;
	else{
		encontro = vocales.find(letra);
		if(encontro <= 9 && 0<= encontro)
			cout << letra << " es una vocal" << endl;
		else
			cout << "es una caracter desconocido" << endl;
	}
	return 0;
}