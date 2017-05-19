#include "ObrasDA.h"
#include <string>
#include <vector>

using namespace std;

#ifndef ESCULTURAS_H
#define ESCULTURAS_H

class esculturas : public ObrasDA {
	
	private:
		double peso;
		string material;
	
	public:
		esculturas();
		esculturas(string, string, string, string, double, string);
		//~esculturas();
		string getMaterial();
		void setMaterial(string);
		double getPeso();
		void setPeso(double);
};

#endif