#include <iostream>
#include <Windows.h>
using namespace  std;

int main() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Teste" << endl;
	system("pause");
	return 0;
}