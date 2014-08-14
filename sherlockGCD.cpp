#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	for(int i = 0; i < testNum; i++){
		int numRead;
		cin >> numRead;
		//Edge case
		int flag = 0; 

		int numArray[numRead];
		for(int j = 0; j < numRead; j++){
			cin >> numArray[j];
		}

		if(numRead == 1){
			cout << "NO" << endl;
			continue;
		}

		for(int j = 0; j < (numRead - 1); j++){
			for(int k = j+1; k < numRead; k++){
				int divisible = 2;
				while(divisible <= max(numArray[k], numArray[j])){
					if((numArray[k] % divisible == 0) && (numArray[j] % divisible == 0)){
						flag = 1;
						break;
					}
					if(divisible == max(numArray[k], numArray[j])){
						flag = 0;
					}
					divisible++;
				}
			}

			if(!flag){
				cout << "YES" << endl;
				break;
			}
		}

		if(flag){
			cout << "NO" << endl;
		}
	}

	return 0;
}