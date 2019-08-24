// Adapted by Leo Porter

#include "archlab.h"
#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <set>
using namespace std;

int main(int argc, char **argv)
{
  archlab_parse_cmd_line(&argc, argv);
    // generate data
    const unsigned array_size = 1000000;
    //const unsigned array_size = 10;
    set<int>* data = new set<int>();
    long long sum = 0;
    unsigned int iterations = 100;

    for (unsigned i = 0; i < array_size; ++i)
        data->insert(std::rand());

    cout << "target size = " << array_size;
    cout << " actual size = " << data->size() << endl;

    //std::sort (data->begin(), data->end());
/*
    for (auto it = data->begin(); it != data->end(); ++it){
	cout << *it << endl;
    }
*/
  pristine_machine();               // reset the machine 
  start_timing("tag", "bst",      // Start timing.  Set an identifier 'tag' = 'hello'.  It'll appear along with the measurements in 'stats.csv'
	       NULL);

    for(unsigned k = 0; k < iterations; k++){
	    int val = std::rand();
	    auto it = data->find(val);
	    if (it != data->end()){
		    sum++;
	    }
    }

  stop_timing();                    // Stop timing.
  archlab_write_stats();

/*
 //find using iterator!
    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = data->begin(); it != data->end(); ++it){
            if (*it == val){
                sum++;
	    }
        }
    }
*/
    cout << "sum = " << sum << std::endl;

}
