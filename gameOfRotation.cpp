#include <iostream>

using namespace std;

int main()
{
	int beltSize;
	cin >> beltSize;

	int initialArray[beltSize];

	for(int i = 0; i < beltSize; i++){
		cin >> initialArray[i];
	}

	for(int i = 0; i < beltSize; i++){
		cout << initialArray[i] << endl;
	}

	return 0;
}