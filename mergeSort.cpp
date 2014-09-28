#include <iostream>
#include <math.h>

using namespace std;

int* mergeArray(int arrayA[], int arrayB[],int sizeA, int sizeB)
{
	int finalLength = sizeA + sizeB;
	int *finalArray = new int[finalLength];

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

	return finalArray;
}

int* mergeSort(int start, int size, int* mArray)
{
	if(size-start <= 1){
		int *single = new int[size-start];
		int j = 0;
		for(int i = start; i < size; i++){
			single[j] = mArray[i];
			j++;
		}
		return single;
	} else {
		int mid = (size+start)/2;
		int* left = mergeSort(start, mid, mArray);
		int* right = mergeSort(mid,size, mArray);
		
		int* returnArray = mergeArray(left, right, (mid - start), (size - mid));

		cout << "Returning: ";
		for(int i = 0; i < size;i++){
			cout << returnArray[i] << " ";
		}
		cout << endl;
		return returnArray;
	}
}

int main()
{
	int size;
	cin >> size;

	int mArray[size];

	for(int i = 0; i < size; i++){
		cin >> mArray[i];
	}

	int* sortedArray = mergeSort(0, size, mArray);
	
	//Debug only
	for(int i = 0; i < size; i++){
		cout << sortedArray[i] << endl;
	}

	return 0;
}
