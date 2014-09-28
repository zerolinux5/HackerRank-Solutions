#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int mArray[size];

	for(int i = 0; i < size; i++){
		cin >> mArray[i];
	}

	for(int i = 0; i < size; i++){
		cout << mArray[i] << endl;
	}

	return 0;
}
