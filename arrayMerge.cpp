#include <iostream>

using namespace std;

int main()
{
	int size1, size2;
	cin >> size1 >> size2;
	
	int arrayA[size1];
	int arrayB[size2];

	for(int i = 0; i < size1; i++){
		cin >> arrayA[i];
	}
	
	for(int i = 0; i < size1; i++){
		cin >> arrayB[i];
	}

	return 0;
}
