vektoriai: vektoriai.o funkcijos.o utils.o
	g++ vektoriai.o funkcijos.o utils.o -o vektoriai
	rm -f vektoriai.o funkcijos.o utils.o

vektoriai_O1: vektoriai_O1.o funkcijos_O1.o utils_O1.o
	g++ vektoriai_O1.o funkcijos_O1.o utils_O1.o -o vektoriai_O1
	rm -f vektoriai_O1.o funkcijos_O1.o utils_O1.o

vektoriai_O2: vektoriai_O2.o funkcijos_O2.o utils_O2.o
	g++ vektoriai_O2.o funkcijos_O2.o utils_O2.o -o vektoriai_O2
	rm -f vektoriai_O2.o funkcijos_O2.o utils_O2.o

vektoriai_O3: vektoriai_O3.o funkcijos_O3.o utils_O3.o
	g++ vektoriai_O3.o funkcijos_O3.o utils_O3.o -o vektoriai_O3
	rm -f vektoriai_O3.o funkcijos_O3.o utils_O3.o

%.o: %.cpp
	g++ -c $< -o $@

%_O1.o: %.cpp
	g++ -O1 -c $< -o $@

%_O2.o: %.cpp
	g++ -O2 -c $< -o $@

%_O3.o: %.cpp
	g++ -O3 -c $< -o $@