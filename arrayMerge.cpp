#include <iostream>

using namespace std;

void mergeArray(int arrayA[], int arrayB[], int finalArray[], int sizeA, int sizeB){
	int finalLength = sizeA + sizeB;

	int pointA = 0, pointB = 0;
	for(int i = 0; i < finalLength; i++){
		if ( pointA >= sizeA) {
			finalArray[i] = arrayB[pointB];
			pointB++;
		} else if (pointB >= sizeB) {
			finalArray[i] = arrayA[pointA];
			pointA++;
		} else if(arrayA[pointA] > arrayB[pointB]){
			finalArray[i] = arrayB[pointB];
			pointB++;
		} else {
			finalArray[i] = arrayA[pointA];
			pointA++;
		}
	}
}


int main()
{
	int size1, size2;
	cin >> size1 >> size2;
	
	int arrayA[size1];
	int arrayB[size2];

	for(int i = 0; i < size1; i++){
		cin >> arrayA[i];
	}
	
	for(int i = 0; i < size2; i++){
		cin >> arrayB[i];
	}

	int totalSize = size1 + size2;
	int finalArray[totalSize];

	mergeArray(arrayA, arrayB, finalArray, size1, size2);

	for(int i = 0; i < totalSize; i++){
		cout << finalArray[i] << endl;
	}

	return 0;
}
