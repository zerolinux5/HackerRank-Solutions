#include <iostream>

using namespace std;

int main()
{
	int sizeM, sizeN;
	cin >> sizeM >> sizeN;

	int inputArray[sizeM][sizeN];

	for(int i = 0; i < sizeM;i++){
		for(int j = 0; j < sizeN; j++){
			cin >> inputArray[i][j];
		}
	}
}
