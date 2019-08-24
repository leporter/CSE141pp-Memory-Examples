#include <stdio.h>
#include <stdlib.h>


typedef struct Patient {
   double amount_owed;
   int arr[3000];
} Patient;

int main() {
  int size = 100000;
  int iterations = 10000;
  double val = 0;

  Patient *list = (Patient *)malloc(sizeof(Patient)*size);

  for(int j = 0; j < iterations; j++) {
	  for(int i = 0; i < size; i++) {
		  val+= list[i].amount_owed;
		  list[i].amount_owed += 1.0;
	  }
  }
  printf("Val = %f\n",val);
  

}
