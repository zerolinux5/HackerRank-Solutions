#include <iostream>

using namespace std;

int main()
{
	int size, turns, indexes;
	cin >> size >> turns >> indexes;

	int circularArray[size];
	int counter = 0;

	for(int i = 0; i < size; i++){
		cin >> circularArray[i];
	}

	long long oldIndex = 0;
	int oldValue = circularArray[0];
	while(counter < size){
		long long newlocation = oldIndex + turns;
		newlocation %= size;
		int tempValue = circularArray[newlocation];
		circularArray[newlocation] = oldValue;
		oldValue = tempValue;
		oldIndex = newlocation;
		counter++; 
	}

	int searchArray[indexes];

	for(int i = 0; i < indexes;i++){
		cin >> searchArray[i];
	}

	for(int i = 0; i < indexes;i++){
		int index = searchArray[i];
		cout << circularArray[index] << endl;
	}

	/* Debugg to check array
	for(int i = 0; i < size; i++){
		cout << circularArray[i] << endl;
	}*/

	return 0;

}
