histo: main.o histogram.o randomList.o 
	g++ -o histo main.o histogram.o randomList.o

main.o: main.cpp
	g++ -c main.cpp

histogram.o: histogram.cpp
	g++ -c histogram.cpp

randomList.o: randomList.cpp
	g++ -c randomList.cpp

clean:
	-rm *.o histo
