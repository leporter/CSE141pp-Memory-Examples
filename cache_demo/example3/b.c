#include <stdio.h>
#include <stdlib.h>

int get_index(int x, int y, int rows, int cols){
	return y*cols + x;
}

int main() {
  int rows = 10000;
  int cols = 10000;
  int iterations = 10;
  int val = 1;

  int count = 0;
  int *arr = (int *)malloc(rows * cols * sizeof(int));  

  for(int count = 0; count<iterations; count++){
	  for(int y = 0; y < rows; y++) {
		  for(int x = 0; x < cols; x++) {
			  (*(arr + y*cols + x))++;
			  val+=*(arr + y*cols + x);
		  }
	  }
  }
  printf("Val = %d\n",val);
  free(arr);  

}
