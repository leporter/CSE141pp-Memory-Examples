all: linear random

EXTRA_CFLAGS = -O3 -std=c++11

linear: linear.cpp 
	g++ $(EXTRA_CFLAGS) linear.cpp -o linear

random: random.cpp 
	g++ $(EXTRA_CFLAGS) random.cpp -o random

clean:
		rm -f linear
		rm -f random
