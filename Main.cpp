#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "ObrasDA.h"
#include "disenosA.h"
#include "esculturas.h"
#include "literatura.h"
#include "pinturas.h"

using namespace std;

int menu();
string random();

int main() {
	srand(time(NULL));
	vector<ObrasDA*> museo;
	vector<ObrasDA*> otrosmuseos;
	bool seguir = true;
	while (seguir == true) {
		int opcion;
		opcion = menu();
		if(opcion == 1) {
			string ID = random();
			listaItems.push_back(new Curativas(nombre1, precio2, curar3));
		} else if (opcion == 2) {
			
		} else if (opcion == 3) {
			
		} else if (opcion == 4) {

		} else if (opcion == 5) {

		} else {
			cout << "Nos vemos luego!" << endl;
		}
	}

	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Agregar\n";
	cout << "2) Listar\n";
	cout << "3) Eliminar\n";
	cout << "4) Transferir a otro Museo\n";
	cout << "5) Busqueda\n";
	cout << "6) Salir\n";
	int resp;
	cin >> resp;
	return resp;
}

string random() {
	int random;
	stringstream random1;
	string random2;
	for (int i = 0; i < 16; ++i)
	{
		random = rand() % 15 + 0;
		if (random == 10)
		{
			random1 << "A";
		} else if (random == 11)
		{
			random1 << "B";
		} else if (random == 12)
		{
			random1 << "C";
		} else if (random == 13)
		{
			random1 << "D";
		} else if (random == 14)
		{
			random1 << "E";
		} else if (random == 15)
		{
			random1 << "F";
		} else {
			random1 << random;
		}
	}
	random2 = random1.str();
	return random2;
}
