#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {    
    int i,j;
    int value;
    int flag = 0;
    for(i=0;i<ar_size;i++)
    {
        value=ar[i];
        j=i-1;
        while(j>=0 && value<ar[j])
        {
            ar[j+1]=ar[j];
            j=j-1;
            flag = 1;
        }
        ar[j+1]=value;   
        if(flag){  
            for(int j = 0; j < ar_size;j++){
                printf("%d ", ar[j]);
            }
            printf("\n");
        }
        flag = 1;
    }
}
int main(void) {
   
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
   
   return 0;
}
