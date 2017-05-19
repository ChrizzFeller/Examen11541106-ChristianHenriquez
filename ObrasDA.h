#include <string>
#include <vector>

using namespace std;

#ifndef OBRASDA_H
#define OBRASDA_H

class ObrasDA {
	
	protected:
		string id;
		string nombre;
		string autor;
		string fechaDI;
	
	public:
		ObrasDA(string, string, string, string);
		~ObrasDA();
		string getID();
		void setID(string);
		string getNombre();
		void setNombre(string);
		string getAutor();
		void setAutor(string);
		string getFecha();
		void setFecha(string);
};

#endif