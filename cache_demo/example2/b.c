#include <stdio.h>
#include <stdlib.h>


typedef struct Foo {
   int a,b,c,d,e,f,g,i,h;
} Foo;

int main() {
  int size = 10000000;
  int iterations = 100;
  int val = 0;

  Foo *blah = (Foo *)malloc(sizeof(Foo)*size);

  for(int j = 0; j < iterations; j++) {

	  for(int i = 0; i < size; i++) {
		  val+= blah[i].a + blah[i].b;
		  val+= blah[i].c + blah[i].d;
		  val+= blah[i].e + blah[i].f;
		  val+= blah[i].g + blah[i].h;
	  }
  }
  printf("Val = %d\n",val);
  

}
