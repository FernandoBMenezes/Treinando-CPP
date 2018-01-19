#include <iostream>
#include <string>

using namespace std;

int main() {
	//char *str1 = "Hello!";  //DEU ERRO
	//char str2[64] = "Ola para vc tbm!";
	string s;

	cout << s << endl;
	/*s = "Algum texto!";
	cout << s << endl;
	cout << s.at(0) << endl;//Mostrar o caracter nessa posição

	string palavra;
	cout << "Entre com Palavra: "; cin >> palavra;
	string ps = s + " " + palavra; // +=
	cout << ps << endl;
	cout << s.length() << endl;*/

	s.append("ABC");//IRA ADICIONAR =  "+"
	cout << s << endl;
	s.insert(1, "123");//IRA ADICIONAR A PARTIR DAQUELE LOCAL
	cout << s << endl;
	s.replace(0, 3, "X12");//IRA PEGAR O CARACTER 0 E TROCAR OS 3 A PARTIR DELE
	cout << s << endl;
	cout << s.find("12") << endl;//IRA MOSTRAR POSIÇÃO DO CARACTER NA STRING
	cout << s.substr(3) << endl;//IRA MOSTRAR STRING SÓ APARTIR DA POSIÇÃO COLOCADA
	cout << s.substr(3, 2) << endl;//IRA MOSTRAR STRING SÓ APARTIR DA POSIÇÃO COLOCADA ATÉ LUGAR COLOCADO

	system("pause");
	return 0;
}