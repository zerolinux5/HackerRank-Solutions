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
		cout << arrayB[i] << endl;
	}

	return 0;

}