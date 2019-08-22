all: arraylist linkedlist

EXTRA_CFLAGS = -O3 -std=c++11

arraylist: arraylist.cpp 
	g++ $(EXTRA_CFLAGS) arraylist.cpp -o arraylist

linkedlist: linkedlist.cpp 
	g++ $(EXTRA_CFLAGS) linkedlist.cpp -o linkedlist

clean:
		rm -f arraylist
		rm -f linkedlist
