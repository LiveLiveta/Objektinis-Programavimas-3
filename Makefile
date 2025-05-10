vektoriai: vektoriai.o funkcijos.o
	g++ vektoriai.o funkcijos.o -o vektoriai
	rm -f vektoriai.o funkcijos.o

vektoriai_O1: vektoriai_O1.o funkcijos_O1.o
	g++ vektoriai_O1.o funkcijos_O1.o -o vektoriai_O1
	rm -f vektoriai_O1.o funkcijos_O1.o

vektoriai_O2: vektoriai_O2.o funkcijos_O2.o
	g++ vektoriai_O2.o funkcijos_O2.o -o vektoriai_O2
	rm -f vektoriai_O2.o funkcijos_O2.o

vektoriai_O3: vektoriai_O3.o funkcijos_O3.o
	g++ vektoriai_O3.o funkcijos_O3.o -o vektoriai_O3
	rm -f vektoriai_O3.o funkcijos_O3.o

vektoriai.o: vektoriai.cpp
	g++ -c vektoriai.cpp -o vektoriai.o
vektoriai_O1.o: vektoriai.cpp
	g++ -O1 -c vektoriai.cpp -o vektoriai_O1.o
vektoriai_O2.o: vektoriai.cpp
	g++ -O2 -c vektoriai.cpp -o vektoriai_O2.o
vektoriai_O3.o: vektoriai.cpp
	g++ -O3 -c vektoriai.cpp -o vektoriai_O3.o

funkcijos.o: funkcijos.cpp
	g++ -c funkcijos.cpp -o funkcijos.o
funkcijos_O1.o: funkcijos.cpp
	g++ -O1 -c funkcijos.cpp -o funkcijos_O1.o
funkcijos_O2.o: funkcijos.cpp
	g++ -O2 -c funkcijos.cpp -o funkcijos_O2.o
funkcijos_O3.o: funkcijos.cpp
	g++ -O3 -c funkcijos.cpp -o funkcijos_O3.o

unittestai:
	g++ testai/unitTestai.cpp studentas.cpp -o testai