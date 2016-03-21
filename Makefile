A: A.o main.o
	g++ -o A  main.o A.o
 
A.o: A.cpp A.h
	g++ -c A.cpp

main.o: main.cpp A.h
	g++ -c main.cpp

clean:
	rm A *.o

