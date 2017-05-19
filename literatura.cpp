#include "literatura.h"
#include <string>

literatura::literatura() {
}

literatura::literatura(string pID, string pNombreI, string pAutor, string pFechaDI, string pGenero, string pEpoca : ObrasDA(pID, pNombreI, pAutor, pFechaDI)) {
	genero = pGenero;
	epoca = pEpoca;
}

string literatura::getGenero() {
	return genero;
}

void literatura::setGenero(string pGenero) {
	genero = pGenero;
}

string literatura::getEpoca() {
	return genero;
}

void literatura::setEpoca(string pEpoca) {
	epoca = pEpoca;
}