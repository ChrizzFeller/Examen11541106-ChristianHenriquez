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
		disenosA(string, string, string, string, double, string);
		~disenosA();
		string getMaterial();
		void setMaterial(string);
		double getPeso();
		void setPeso(double);
};

#endif