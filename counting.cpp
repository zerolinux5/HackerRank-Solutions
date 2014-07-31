#include <iostream>

using namespace std;

int main()
{
	int numInputs;
	cin >> numInputs;

	int array[100];

	for(int i = 0; i < 100; i++){
		array[i] = 0;
	}

	while(numInputs--){
		int newNum;
		cin >> newNum;
		array[newNum]++;
	}

	for(int i = 0; i < 100;i++){
		cout << array[i] << " ";
	}
	cout << endl;
}