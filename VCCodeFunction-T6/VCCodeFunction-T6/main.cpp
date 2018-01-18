#include <iostream>
#include <Windows.h>
using namespace std;

int Somar(int a, int b) {
	int c;
	c = a + b;
	return c;
}
void IniciarPrograma(string filename) {
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main() {
	//cout << "Resultado: " << Somar(1, 2) << endl;
	IniciarPrograma("mspaint");
	system("pause");
	return 0;
}