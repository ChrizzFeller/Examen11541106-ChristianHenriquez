#include "disenosA.h"
#include <string>

disenosA::disenosA() {
}

disenosA::disenosA(string pID, string pNombreI, string pAutor, string pFechaDI, string pTipo : ObrasDA(pID, pNombreI, pAutor, pFechaDI)) {
	tipoDT = pTipo;
}

string disenosA::getTipo() {
	return tipoDT;
}

void disenosA::setTipo(string pTipo) {
	tipoDT = pTipo;
}