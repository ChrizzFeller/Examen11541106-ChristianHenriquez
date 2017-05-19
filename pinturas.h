#include "ObrasDA.h"
#include <string>
#include <vector>

using namespace std;

#ifndef PINTURAS_H
#define PINTURAS_H

class pinturas : public ObrasDA {
	
	private:
		string material;
		string tecnica;
	
	public:
		pinturas();
		pinturas(string, string, string, string, string, string);
		//~pinturas();
		string getMaterial();
		void setMaterial(string);
		string getTecnica();
		void setTecnica(string);
};

#endif