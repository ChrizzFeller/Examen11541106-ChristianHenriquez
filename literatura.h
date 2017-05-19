#include "ObrasDA.h"
#include <string>
#include <vector>

using namespace std;

#ifndef LITERATURA_H
#define LITERATURA_H

class literatura : public ObrasDA {
	
	private:
		string genero;
		string epoca;
	
	public:
		literatura(string, string, string, string, string, string);
		~literatura();
		string getGenero();
		void setGenero(string);
		string getEpoca();
		void setEpoca(string);
};

#endif