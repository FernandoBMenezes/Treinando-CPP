#include <iostream>
using namespace std;

int main() {
	int tipo;
	double a, b, c;
	a = 0;
	b = 0;
	tipo = 0;

	/*cout << "Tipo de Conta: 0(+), 1(-)." << endl;
	cin >> tipo;*/

	cout << "Valor do a: " << endl;
	cin >> a;

	cout << "Valor do b: " << endl;
	cin >> b;
	/*if (tipo == 0) {
		c = a + b;
	}
	else {
		c = a - b;
	}*/

	/*while (true) {
		cout << "Oiee" << endl;
	}*/
	c = a + b;
	cout << "Resultado: " << c << endl;
	
	system("pause");
	return 0;
}