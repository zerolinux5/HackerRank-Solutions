#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	int array[testNum];
	int finalArray[100];
	int finalNum = 0;

	for(int i = 0; i < testNum; i++){
		cin >> array[i];

		string ignore;
		cin >> ignore;
	}

	sort(array, array + testNum);

	int continuous = 0;
	for(int i = 0; i < testNum; i++){
		finalNum++;
		finalArray[(array[i])] = finalNum;
	}

	for(int i = 0; i<100; i++){
		if(i >= array[testNum-1]){
			cout << finalNum << " ";
		} else {
			cout << finalArray[i] << " ";
		}
	}

	cout << endl;
	return 0;
}