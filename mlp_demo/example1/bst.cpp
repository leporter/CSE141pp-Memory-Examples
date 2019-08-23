// Adapted by Leo Porter

#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <set>
using namespace std;

int main(int argc, char **argv)
{
    // generate data
    const unsigned array_size = 1000000;
    //const unsigned array_size = 10;
    set<int>* data = new set<int>();
    long long sum = 0;
    int iterations = 100;

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
/*
    for(unsigned k = 0; k < iterations; k++){
	    int val = std::rand();
	    auto it = data->find(val);
	    if (it != data->end()){
		    sum++;
	    }
    }
*/
 //find using iterator!
    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = data->begin(); it != data->end(); ++it){
            if (*it == val){
                sum++;
	    }
        }
    }

    cout << "sum = " << sum << std::endl;

}
