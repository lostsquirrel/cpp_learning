CC=g++
CFLAGS=-I.

point:
	$(CC) -c point.h point.cpp point_test.cpp $(CFLAGS)

point_test: point
    $(CC) -o point.exe point.o point
	./point

