#include <iostream>
#include <algorithm>

using namespace std;

bool myfunction (unsigned long i,unsigned long j) { return (i>j); }

int main()
{
	unsigned long testNum, size, value, flag;
	cin >> testNum;

	while(testNum--){
		flag = 1;
		cin >> size >> value;

		unsigned long arrayA[size];
		unsigned long arrayB[size];

		for(int i = 0; i < size; i++){
			cin >> arrayA[i]; 
		}

		for(int i = 0; i < size; i++){
			cin >> arrayB[i]; 
		}

		sort(arrayA, arrayA + size);
		sort(arrayB, arrayB + size, myfunction);

		for(int i = 0; i < size;i++){
			if(arrayA[i] + arrayB[i] < value){
				flag = 0;
				break;
			}
		}

		if (flag){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}