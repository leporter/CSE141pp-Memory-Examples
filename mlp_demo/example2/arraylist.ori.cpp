// Adapted by Leo Porter

#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    // generate data
    const unsigned array_size = 1000000;
    vector<int>* data = new vector<int>();
    vector<int>* addr = new vector<int>();
    long long sum = 0;
    int iterations = 100;

    // init the data vector
    for (unsigned i = 0; i < array_size; ++i)
        data->push_back(std::rand());

    for(unsigned i = 0; i < array_size; i+=64)
	addr->push_back(i);

    std::sort (data->begin(), data->end());
/*
    for (auto it = data->begin(); it != data->end(); ++it){
	cout << *it << endl;
    }
*/
    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = addr->begin(); it != addr->end(); ++it){
            if (data->at(*it) == val){
                sum++;
	    }
        }
    }
    std::cout << "sum = " << sum << std::endl;
}
