#include "ObrasDA.h"
#include <string>

ObrasDA::ObrasDA() {
}

ObrasDA::ObrasDA(string pID, string pNombre, string pAutor, string pFechaDI) {
	id = pID;
	nombre = pNombre;
	autor = pAutor;
	fechaDI = pFechaDI;
}

string ObrasDA::getNombre() {
	return nombre;
}

void ObrasDA::setNombre(string pNombre) {
	nombre = pNombre;
}

string ObrasDA::getID() {
	return id;
}

void ObrasDA::setID(string pID) {
	id = pID;
}

string ObrasDA::getAutor() {
	return autor;
}

void ObrasDA::setAutor(string pAutor) {
	autor = pAutor;
}

string ObrasDA::getFecha() {
	return fechaDI;
}

void ObrasDA::setFecha(string pFechaDI) {
	fechaDI = pFechaDI;
}