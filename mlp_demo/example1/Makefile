all: arraylist linkedlist bst

EXTRA_CFLAGS = -O3 -std=c++11

arraylist: arraylist.cpp 
	g++ $(EXTRA_CFLAGS) arraylist.cpp -o arraylist

linkedlist: linkedlist.cpp 
	g++ $(EXTRA_CFLAGS) linkedlist.cpp -o linkedlist


bst: bst.cpp 
	g++ $(EXTRA_CFLAGS) bst.cpp -o bst

clean:
		rm -f arraylist
		rm -f linkedlist
		rm -f bst
