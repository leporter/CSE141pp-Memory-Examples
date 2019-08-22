all: a b

EXTRA_CFLAGS = -O0  -std=c11

a: a.c 
	gcc $(EXTRA_CFLAGS) a.c -o a

b: b.c
	gcc $(EXTRA_CFLAGS) b.c -o b

clean:
		rm -f a 
		rm -f b 
