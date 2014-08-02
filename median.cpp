#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arraySize;
	cin >> arraySize;

	int smaller = 0;
	int bigger = 0;
	int array[arraySize];
	for(int i = 0; i < arraySize;i++){
		int newNum;
		cin >> array[i];
	}
	sort(array,array+arraySize);
	cout << array[arraySize/2] << endl;

	return 0;
}