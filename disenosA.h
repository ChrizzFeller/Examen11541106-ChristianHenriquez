#include "ObrasDA.h"
#include <string>
#include <vector>

using namespace std;

#ifndef DISENOSA_H
#define DISENOSA_H

class disenosA : public ObrasDA {
	
	private:
		string tipoDT;
	
	public:
		disenosA(string, string, string, string, string);
		~disenosA();
		string getTipo();
		void setTipo(string);
};

#endif