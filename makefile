
output: main.o channel.o 
	g++ main.o channel.o -o output

main.o: main.cpp
	g++ -c main.cpp

channel.o: channel.cpp channel.h
	g++ -c channel.cpp



clean:
	rm *.o output

