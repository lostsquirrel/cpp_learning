CC=g++
CFLAGS=-std=c++98

point:
	$(CC) -c point.h point.cpp point_test.cpp $(CFLAGS)
	$(CC) -o point.bin point.o point_test.o
	./point.bin

circle:
	$(CC) -c circle.h circle.cpp circle_test.cpp $(CFLAGS)
	$(CC) -o circle.bin circle.o circle_test.o
	./circle.bin

clean:
	rm *.o *.bin
