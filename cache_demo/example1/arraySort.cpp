// Original author Hung-Wei Tsent
// Adapted by Leo Porter

#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>


int main(int argc, char **argv)
{
    // generate data
    const unsigned array_size = 32768;
    int data[array_size];
    int option = atoi(argv[1]);
    long long sum = 0;

    for (unsigned i = 0; i < array_size; ++i)
        data[i] = std::rand();

    if(option){
        std::sort(data, data + array_size);
	std::cout << "Sorted" << std::endl;
    }
    else {

	std::cout << "Unsorted" << std::endl;
    }
   
    for(unsigned k = 0; k < 10000; k++){
        int threshold = std::rand();
        for (unsigned i = 0; i < array_size; ++i) {
            if (data[i] >= threshold){
                sum++;
		data[i]--;
	    }
	    data[i]++;
        }
    }
    std::cout << "sum = " << sum << std::endl;
}
