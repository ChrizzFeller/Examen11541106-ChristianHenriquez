#include "pinturas.h"
#include <string>

pinturas::pinturas() {
}

pinturas::pinturas(string pID, string pNombreI, string pAutor, string pFechaDI, string pMaterial, string pTecnica : ObrasDA(pID, pNombreI, pAutor, pFechaDI)) {
	material = pMaterial;
	tecnica = pTecnica;
}

string pinturas::getMaterial() {
	return material;
}

void pinturas::setMaterial(string pMaterial) {
	material = pMaterial;
}

string pinturas::getTecnica() {
	return 	tecnica;
}

void pinturas::setTecnica(string pTecnica) {
	tecnica = pTecnica;
}