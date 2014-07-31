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
		int flag = 0;

		int numArray[numRead];
		for(int j = 0; j < numRead; j++){
			cin >> numArray[j];
		}

		for(int j = 0; j < numRead; j++){
			for(int k = j+1; k < numRead; k++){
				int divisible = 2;
				while(divisible <= max(numArray[k], numArray[j])){
					if((numArray[k] % divisible != 0) && (numArray[j] % divisible != 0)){
						cout << "YES" << endl;
						flag = 1;
						break;
					}
					divisible++;
				}

				if(flag){
					break;
				}
			}

			if(flag){
				break;
			}
		}
		if(!flag){
			cout << "NO" << endl;
		}
	}

	return 0;
}