#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	int biggerCount = 0;
	int pivot;
	int array[size];

	for(int i = 0; i < size;i++){
		cin >> array[i];
		if(i == 0){
			pivot = array[i];
		}
		if(array[i] > pivot){
			biggerCount++;
		}
	}

	int finalArray[size];
	int rightEnd = size - biggerCount;
	int leftEnd = 0;
	finalArray[rightEnd-1] = pivot;
	for(int i = 1; i < size;i++){
		if(array[i] > pivot){
			finalArray[rightEnd] = array[i];
			rightEnd++;
		} else {
			finalArray[leftEnd] = array[i];
			leftEnd++;			
		}
	}

	for(int i = 0; i < size;i++){
		cout << finalArray[i] << " ";
	}
	cout << endl;

	return 0;
}