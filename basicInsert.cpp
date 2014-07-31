#include <iostream>

using namespace std;

int main()
{
	int arraySize;
	cin >> arraySize;
	int array[arraySize];
	int location = arraySize - 1;

	for(int i = 0; i < arraySize;i++){
		cin >> array[i];
	}

	int shiftNum = array[arraySize - 1];
	while(location){
		if(shiftNum < array[location - 1]){
			array[location] = array[location-1];
		} else if(shiftNum == array[location-1]){
			array[location] = shiftNum;
			for(int i = 0; i < arraySize;i++){
				cout << array[i] << " ";
			}
			cout << endl;
			break;
		} else {
			array[location] = shiftNum;
			for(int i = 0; i < arraySize;i++){
				cout << array[i] << " ";
			}
			cout << endl;
			break;
		}
		location--;
		for(int i = 0; i < arraySize;i++){
			cout << array[i] << " ";
		}
		cout << endl;
	}

	if(shiftNum < array[location]){
		array[0] = shiftNum;
		for(int i = 0; i < arraySize;i++){
			cout << array[i] << " ";
		}
		cout << endl;
	}

	return 0;
}