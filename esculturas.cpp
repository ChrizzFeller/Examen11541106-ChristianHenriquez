#include "esculturas.h"
#include <string>

esculturas::esculturas() {
}

esculturas::esculturas(string pID, string pNombreI, string pAutor, string pFechaDI, double pPeso , string pMaterial) : ObrasDA(pID, pNombreI, pAutor, pFechaDI) {
	peso = pPeso;
	material = pMaterial;
}

double esculturas::getPeso() {
	return peso;
}

void esculturas::setPeso(double pPeso) {
	peso = pPeso;
}

string esculturas::getMaterial() {
	return material;
}

void esculturas::setMaterial(string pMaterial) {
	material = pMaterial;
}