CXX = g++
CFLAGS =
CPPFLAGS =
main: main.o shapes.o
	$(CXX) -o main main.o shapes.o
main.o: main.cpp shapes.h
shapes.o: shapes.cpp shapes.h
clean:
	rm *.o