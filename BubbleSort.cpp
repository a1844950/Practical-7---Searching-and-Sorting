#include <iostream>
#include <vector>
#include "BubbleSort.h"

using namespace std;

vector<int>BubbleSort::sort(vector<int> list){
    int n = list.size
    for ( int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(list[j] > list[j+1]) 
            {
                swap(list[j], list[j+1]);
            
            }
        }

    
    }
    return list
}

