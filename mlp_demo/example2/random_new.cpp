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
    const unsigned array_size = 100000000;
    vector<int>* data = new vector<int>();
    vector<int>* addr = new vector<int>();
    long long sum = 0;
    int num_blocks = array_size / 64;
    unsigned int iterations = 200;
    unsigned int ops = 0;

    // init the data vector
    for (unsigned i = 0; i < array_size; ++i)
        data->push_back(std::rand());

    for (unsigned i = 0; i < array_size; i+=64)
        addr->push_back((std::rand()%num_blocks)*64);

    std::random_shuffle(addr->begin(), addr->end());
/*
    for (auto it = addr->begin(); it != addr->end(); ++it){
	cout << *it << endl;
    }
*/
    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = addr->begin(); it != addr->end(); ++it){
            if (data->at(*it) == val){
                sum++;
	    }
	    ops++;
        }
    }
    std::cout << "sum = " << sum << " ops = " << ops << std::endl;
}
