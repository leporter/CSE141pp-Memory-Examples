// Adapted by Leo Porter

#include <algorithm>
#include <ctime>
#include <iostream>
#include <climits>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
    // generate data
    const unsigned array_size = 1000000;
    //const unsigned array_size = 10;
    list<int>* data = new list<int>();
    long long sum = 0;
    int iterations = 100;

    for (unsigned i = 0; i < array_size; ++i)
        data->push_back(std::rand());

    data->sort();

/*
    for (auto it = data->begin(); it != data->end(); ++it){
	cout << *it << endl;
    }
*/
    for(unsigned k = 0; k < iterations; k++){
        int val = std::rand();
    	for (auto it = data->begin(); it != data->end(); ++it){
            if (*it == val){
                sum++;
	    }
        }
    }
    std::cout << "sum = " << sum << std::endl;

}
