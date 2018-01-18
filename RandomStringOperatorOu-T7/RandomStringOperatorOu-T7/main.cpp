#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	int num, numrand;
	char sn;
	string nome;

	srand(time(NULL));//IMPORTANTE
	//ALEATORIO
	/*for (int i = 0; i < 10; i++) {
		cout << rand() % 10 << endl;
	}*/
	//MSG									CAPTURAR NOME
	cout << "Bem vindo, Coloque seu nome: "; cin >> nome;
	//MSG													RESPOSTA
	cout << "Ola " << nome << ", Gostaria de jogar ? (s/n) "; cin >> sn;
	//IF
	if (sn == 's' || sn == 'S') {
		while (true) {
			cout << "Computador ira imaginar um numero de (0-10) tente adivinhar: "; cin >> num;
			numrand = rand() % 10;

			if (num == numrand) {
				cout << "ACERTOU!!!" << endl;
			}
			else {
				cout << "ERROU!!! Numero era " << numrand << endl;
			}
		}
	}
	else {
		return 0;
	}

	system("pause");
	return 0;
}