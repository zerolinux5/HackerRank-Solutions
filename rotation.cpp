#include <iostream>

using namespace std;

int main()
{
	int size, turns, indexes;
	cin >> size >> turns >> indexes;

	int circularArray[size];

	for(int i = 0; i < size; i++){
		cin >> circularArray[i];
	}

	for(int i = 0; i < size; i++){
		cout << circularArray[i] << endl;
	}

	return 0;

}
