#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	int cavityMap[size][size];

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			char inputChar;
			cin >> inputChar;
			cavityMap[i][j] = inputChar - '0';
		}
	}

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			int currentNum = cavityMap[i][j];
			if( i == 0 || j == 0 || (i == size - 1) || (j == size - 1)){
				cout << currentNum;
			} else {
				int topNum = cavityMap[i-1][j];
				int bottomNum = cavityMap[i+1][j];
				int leftNum = cavityMap[i][j-1];
				int rightNum = cavityMap[i][j+1];
				if((currentNum > topNum) && (currentNum > bottomNum) && (currentNum > leftNum) && (currentNum > rightNum)){
					cout << "X";
				} else {
					cout << currentNum;
				}
			}
		}
		cout << endl;
	}

	return 0;
}