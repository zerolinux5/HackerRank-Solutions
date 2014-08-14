#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
int quickTime = 0;

int insertionSort(int ar_size, int *  ar) {    
    int i,j;
    int value;
    int switchNum = 0;
    for(i=0;i<ar_size;i++)
    {
        value=ar[i];
        j=i-1;
        while(j>=0 && value<ar[j])
        {
            ar[j+1]=ar[j];
            j=j-1;
            switchNum++;
        }
        ar[j+1]=value;        
    }

    return switchNum;
}

void quick(int ar_size, int start, int* ar) {
    if((ar_size - start) < 2){
        return;
    } else {
        int pivot = ar[ar_size - 1];
        int temp;
        int j = start;
        for(int i = start; i < ar_size;i++){
            if(ar[i] <= pivot){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
                quickTime++;
                j++;
            }
        }
        quick(j-1,start,ar);
        quick(ar_size,j,ar);
    }
}

int main(void) {
    int _ar_size;

    scanf("%d", &_ar_size);
    int _ar[_ar_size], _quick[_ar_size], _ar_i;

    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        int newNum;
        scanf("%d", &newNum); 
        _ar[_ar_i] = newNum;
        _quick[_ar_i] = newNum;
    }

    quick(_ar_size, 0, _quick);
    cout << insertionSort(_ar_size, _ar) - quickTime;
    
   
   return 0;
}
