#include <stdio.h>
#include <stdlib.h>
typedef struct Patient{
   double amount_owed;
} Patient;

typedef struct Patient_Extra {
   int arr[3000];
} Patient_Extra;

int main() {
  int size = 100000;
  int iterations = 10000;
  double val = 0;

  Patient *list_owed = (Patient *)malloc(sizeof(Patient)*size);
  Patient_Extra *list = (Patient_Extra *)malloc(sizeof(Patient_Extra)*size);

  for(int j = 0; j < iterations; j++) {
	  for(int i = 0; i < size; i++) {
		  val+= list_owed[i].amount_owed;
		  list_owed[i].amount_owed += 1.0;
	  }
	  val += list[j].arr[j%3000];
  }
  printf("Val = %f\n",val);
  

}
