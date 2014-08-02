/* Sample program illustrating input/output */
#include <iostream>
#include <algorithm>

using namespace std;

bool myfunction (unsigned long i,unsigned long j) { return (i>j); }

int main(void){
//Helpers for input and output

   int N, K;
   cin >> N >> K;
   int C[N];
   int result = 0;
   int flag = 0;

   for(int i = 0; i < N; i++){
   	  if(N == K){
   	  	int addNum;
   	  	cin >> addNum;
   	  	result += addNum;
   	  	flag = 1;
   	  } else {
    	cin >> C[i];
 	  }
   }

   if(flag){

   } else {
   	int D[K];
   	for(int i = 0; i < K;i++){
   		D[i] = 0;
   	}
   	sort(C, C+N, myfunction);
   	int pivotC = 0;
   	int count = 0;
   	while(count < N){
   		result += (C[count]*(D[pivotC]+1));
   		D[pivotC]++;
   		pivotC++;
   		count++;
   		if(pivotC == K){
   			pivotC = 0;
   		}
   	}
   }
   
   cout << result << "\n";
   
   return 0;
}
