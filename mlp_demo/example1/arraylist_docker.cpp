// Adapted by Leo Porter

#include "archlab.h"
#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
  archlab_parse_cmd_line(&argc, argv);
    // generate data
    const unsigned array_size = 1000000;
    vector<int>* data = new vector<int>();
    long long sum = 0;
    unsigned int iterations = 100;

    for (unsigned i = 0; i < array_size; ++i)
        data->push_back(std::rand());

    std::sort (data->begin(), data->end());
/*
    for (auto it = data->begin(); it != data->end(); ++it){
	cout << *it << endl;
    }
*/

  pristine_machine();               // reset the machine 
  start_timing("tag", "arraylist",      // Start timing.  Set an identifier 'tag' = 'hello'.  It'll appear along with the measurements in 'stats.csv'
	       NULL);


    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = data->begin(); it != data->end(); ++it){
            if (*it == val){
                sum++;
	    }
        }
    }

  stop_timing();                    // Stop timing.
  archlab_write_stats();
    std::cout << "sum = " << sum << std::endl;
}
