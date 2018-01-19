#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string escrever = "Algum texto!";
	ofstream writer("file1.txt");
	//writer.close();	CAUSAR ERRO
	if (writer.is_open()) {
		writer << escrever << endl;
		writer << "Mais algum..." << endl;

		cout << "Escrevendo... Escrito!" << endl ;
	} else {
		cout << "[Erro]" << endl;
	}
	ifstream reader("file1.txt");
	string escrever2;
	reader >> escrever2;//PRIMEIRA PALAVRA
	cout << escrever2 << endl;
	reader >> escrever2;//CHAMAR DNV = SEGUNDA PALAVRA
	cout << escrever2 << endl;

	writer.close();

	system("pause");
	return 0;
}