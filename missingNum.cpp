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
	sort(arrayB, arrayB + sizeB);

	int flag = 0;
	for(int i = 0; i < sizeA;i++){
		for(int j = flag; j < sizeB; j++){
			if(arrayB[j] == arrayA[i]){
				arrayB[j] = -1;
				flag = j+1;
				break;
			}
		}
	}

	for(int i = 0; i < sizeB;i++){
		if(arrayB[i] != -1){
			cout << arrayB[i] << " ";
		}
	}

	return 0;

}
