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
string randomS();

int main() {
	srand(time(NULL));
	vector<ObrasDA*> museo;
	vector<ObrasDA*> otrosmuseos;
	bool seguir = true;
	cout << "Bienvenido al Museo de arte Británico." << endl;
	while (seguir == true) {
		int opcion;
		opcion = menu();
		if(opcion == 1) {
			string ID = randomS();
			cout << "Ingrese el nombre de la obra de arte: " << endl;
			string nombre;
			cin >> nombre;
			cout << "Ingrese el autor de la obra de arte: " << endl;
			string autor;
			cin >> autor;
			cout << "Ingrese la fecha de ingreso: " << endl;
			string fecha;
			cin >> fecha;
			cout << "Que tipo de obra de arte sera?" << endl;
			cout << "1) Obra de Literatura" << endl;
			cout << "2) Escultura" << endl;
			cout << "3) Pintura" << endl;
			cout << "4) Diseño Arquitectonico" << endl;
			int resp2;
			cin >> resp2;
			while (resp2 < 1 || resp2 > 4) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> resp2;
			}
			if (resp2 == 1)
			{
				cout << "Ingrese genero literario: " << endl;
				string generoL;
				cin >> generoL;
				cout << "Ingrese la epoca; " << endl;
				string epoca;
				cin >> epoca;
				museo.push_back(new literatura(ID, nombre, autor, fecha, generoL, epoca));
				cout << "Obra de arte agreagada exitosamente!" << endl;
			} else if (resp2 == 2)
			{
				cout << "Ingrese peso: " << endl;
				double peso;
				cin >> peso;
				cout << "Ingrese el material con el que esta hecho: " << endl;
				string material;
				cin >> material;
				museo.push_back(new esculturas(ID, nombre, autor, fecha, peso, material));
				cout << "Obra de arte agreagada exitosamente!" << endl;
			} else if (resp2 == 3)
			{
				cout << "Ingrese el material de lienzo: " << endl;
				string materialL;
				cin >> materialL;
				cout << "Ingrese la tecnica utilizada: " << endl;
				string tecnica;
				cin >> tecnica;
				museo.push_back(new pinturas(ID, nombre, autor, fecha, materialL, tecnica));
				cout << "Obra de arte agreagada exitosamente!" << endl;
			} else {
				cout << "Ingrese el tipo de terreno en donde esta diseñada: " << endl;
				string tipoDT;
				cin >> tipoDT;
				museo.push_back(new disenosA(ID, nombre, autor, fecha, tipoDT));
				cout << "Obra de arte agreagada exitosamente!" << endl;
			}
		} else if (opcion == 2) {
			cout << "Obras de arte del museo actual." << endl;
			for (int i = 0; i < museo.size(); ++i)
			{
				cout << "Obra de arte #" << (i + 1) << endl;
				cout << museo.at(i) -> getID() << endl;
				cout << museo.at(i) -> getNombre() << endl;
				cout << museo.at(i) -> getAutor() << endl;
				cout << museo.at(i) -> getFecha() << endl;
			}
			cout << "Obras de arte de otros museos." << endl;
			for (int i = 0; i < otrosmuseos.size(); ++i)
			{
				cout << "Obra de arte #" << (i + 1) << endl;
				cout << otrosmuseos.at(i) -> getID() << endl;
				cout << otrosmuseos.at(i) -> getNombre() << endl;
				cout << otrosmuseos.at(i) -> getAutor() << endl;
				cout << otrosmuseos.at(i) -> getFecha() << endl;
			}
		} else if (opcion == 3) {
			cout << "Cual obra de arte desea borrar?" << endl;
			for (int i = 0; i < museo.size(); ++i)
			{
				cout << i << museo.at(i) -> getNombre();
			}
			int pos;
			cin >> pos;
			while (pos < 0 || pos > museo.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> pos;
			}
			museo.erase(museo.begin() + pos);
			cout << "Obra de arte borrada exitosamente!" << endl;
		} else if (opcion == 4) {
			cout << "Cual obra de arte desea mover?" << endl;
			for (int i = 0; i < museo.size(); ++i)
			{
				cout << i << museo.at(i) -> getNombre();
			}
			int pos2;
			cin >> pos2;
			while (pos2 < 0 || pos2 > museo.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> pos2;
			}
			otrosmuseos.push_back(museo.at(pos2));
			museo.erase(museo.begin() + pos2);
			cout << "Obra de arte movida exitosamente!" << endl;
		} else if (opcion == 5) {
			cout << "Ingrese el autor que desea buscar: " << endl;
			string autorAB;
			cin >> autorAB;
			for (int i = 0; i < museo.size(); ++i)
			{
				if (museo.at(i) -> getAutor() == autorAB)
				{
					cout << museo.at(i) -> getNombre() << endl;
				}
			}
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

string randomS() {
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
