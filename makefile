Main: Main.o ObrasDA.o disenosA.o esculturas.o literatura.o pinturas.o
	g++ Main.o ObrasDA.o disenosA.o esculturas.o literatura.o pinturas.o -o Main

Main.o: Main.cpp ObrasDA.h disenosA.h esculturas.h literatura.h pinturas.h
	g++ -c Main.cpp

ObrasDA.o: ObrasDA.h ObrasDA.cpp
	g++ -c ObrasDA.cpp

disenosA.o: ObrasDA.h disenosA.h disenosA.cpp
	g++ -c disenosA.cpp

esculturas.o: ObrasDA.h esculturas.h esculturas.cpp
	g++ -c esculturas.cpp

literatura.o: ObrasDA.h literatura.h literatura.cpp
	g++ -c literatura.cpp 

pinturas.o: ObrasDA.h pinturas.h pinturas.cpp
	g++ -c pinturas.cpp

clean:
	rm -f *.o Main