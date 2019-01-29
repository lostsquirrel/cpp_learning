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

const_demo:
	$(CC) -c const_demo.h const_demo.cpp const_demo_test.cpp $(CFLAGS)
	$(CC) -o const_demo.bin const_demo.o const_demo_test.o
	./const_demo.bin

StaticDemo:
	$(CC) -c StaticDemo.h StaticDemo.cpp StaticDemoTest.cpp $(CFLAGS)
	$(CC) -o StaticDemo.bin StaticDemo.o StaticDemoTest.o
	./StaticDemo.bin

clean:
	rm *.o *.bin
