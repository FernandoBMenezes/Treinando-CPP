#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int letraValor(char letra) {
	if (letra == 'A') return 0;
	if (letra == 'B') return 1;
	if (letra == 'C') return 2;
	if (letra == 'D') return 3;
	return 4;
}

int main() {
	int Mapa[5][5];
	char alternativa;
	int chuteInt = 0;
	char chuteChar = 'A';
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);

	cout << "Vamos jogar ?(s/n) "; cin >> alternativa;
	if (alternativa == 's' || alternativa == 'S') {

		SetConsoleTextAttribute(h, FOREGROUND_RED);

		cout << "Funciona assim: Tente adivinhar em qual Letra e Numero esta o 'Navio'!\n(Para sair basta fechar)" << endl;
		while (true) {
			cout << "Qual Letra ?(A-D) "; cin >> chuteChar;
			cout << "Qual Numero ?(0-4) "; cin >> chuteInt;
			int lv = letraValor(toupper(chuteChar));

			for (int iy = 0; iy < 5; iy++) {
				for (int ix = 0; ix < 5; ix++) {
					Mapa[iy][ix] = rand() % 2;
				}
			}

			cout << "Atirando em [" << lv << "][" << chuteInt << "]..." << endl;
			if (Mapa[lv][chuteInt] == 1) {
				SetConsoleTextAttribute(h, FOREGROUND_GREEN);
				cout << "Abateu um Navio!!! \n" << endl;
			}
			else {
				SetConsoleTextAttribute(h, FOREGROUND_RED);
				cout << "Errou!!! \n" << endl;
			}
		}
	}
	cout << "Jogo feito para treinamento! -Fernando(Monder)" << endl;
	system("pause");
	return 0;
}