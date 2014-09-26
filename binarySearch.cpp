#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	
	int inArray[size];
	for(int i = 0; i < size; i++){
		cin >> inArray[i];
	}

	for(int i = 0; i < size; i++){
		cout << inArray[i];
	}
}
