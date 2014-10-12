#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int sizeA,sizeB;
	cin >> sizeA;
	int arrayA[sizeA];
	for(int i = 0; i < sizeA; i++){
		cin >> arrayA[i];
	}

	cin >> sizeB;
	int arrayB[sizeB];
	for(int i = 0; i < sizeB; i++){
		cin >> arrayB[i];
	}

	sort(arrayA, arrayA + sizeA);
	for(int i = 0; i < sizeA;i++){
		cout << arrayA[i] << endl;
	}

	sort(arrayB, arrayB + sizeB);
	for(int i = 0; i < sizeB;i++){
		for(int j = 0; j < sizeA; j++){
			if(arrayB[i] == arrayA[i]){
				arrayA[i] = -1;
				break;
			}
		}
	}

	for(int i = 0; i < sizeA;i++){
		if(arrayA[i] != -1){
			cout << arrayA[i] << " ";
		}
	}

	return 0;

}
