#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int n = 0;
	do{
		cout << "ingrese las dimenciones de la matriz cuadrada: " << endl;
		cin >> n;
	}while(n % 2 == 0);
	int y = n;
	int x = 0;
	int matriz[n][n];
	int j =0;
	int nivel = (0.5 * n) - 0.5;
	int giro = (2 * nivel) + 1;
	char sentido = 0;
	// en este for se rellena la matriz con los valores
	for (int i = (n*n); i > 0; i--){
		switch(sentido){
			case 0:
				y--;
				matriz[x][y] = i;
				j++;
				if (j == giro ){
					sentido ++;
					giro --;
					j = 0;
					break;
				}
				break;
			case 1:
				x ++;
				matriz[x][y] = i;
				j ++;
				if (j == giro){
					sentido ++;
					j = 0;
					break;
				}
				break;
			case 2:
				y ++;
				matriz[x][y] = i;
				j ++;
				if (j == giro){
					sentido ++;
					giro --;
					j = 0;
					break;
				}
				break;
			case 3:
				x --;
				matriz[x][y] = i;
				j ++;
				if (j == giro){
					sentido = 0;
					nivel --;
					giro = (2 * nivel) + 1;
					j =0;
				}
		}
	}
	// este for imprime los valores de la matriz
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	n --;
	cout << "en una espiral de " << n <<"x"<< n << " la suma de sus diagonales es: " << round((pow(n,3)*2/3)+(pow(n,2)*5/2)+(n*13/3)+1) << endl; 
	return 0;
}