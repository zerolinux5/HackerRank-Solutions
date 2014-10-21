#include <iostream>

using namespace std;

int main()
{
	int sizeM, sizeN;
	cin >> sizeM >> sizeN;

	int inputArray[sizeM][sizeN];
	int outputArray[sizeM][sizeN];

	//Read in the multidimentional matrix
	for(int i = 0; i < sizeM;i++){
		for(int j = 0; j < sizeN; j++){
			cin >> inputArray[i][j];
		}
	}

	//brute force attempt
	for(int i = 0; i < sizeM; i++){
		for(int j = 0; j < sizeN;j++){
			//top left corner
			if(i == 0 && j == 0){
				int neighborInt = outputArray[i+1][j];
				neighborInt += outputArray[i][j+1];
				neighborInt += outputArray[i+1][j+1];
				outputArray[i][j] = neighborInt;
				//top right corner
			} else if (i == sizeM - 1 && j == 0){
				int neighborInt = outputArray[i][j-1];
				neighborInt += outputArray[i+1][j];
				neighborInt += outputArray[i-1][j-1];
				outputArray[i][j] = neighborInt;
				//bottom left corner
			} else if (i == 0 && j == sizeN - 1) {
				int neighborInt = outputArray[i-1][j];
				neighborInt += outputArray[i][j+1];
				neighborInt += outputArray[i-1][j+1];
				outputArray[i][j] = neighborInt;
				//bottom right corner
			} else if (i == sizeM - 1 && j == sizeN - 1){
				int neighborInt = outputArray[i][j-1];
				neighborInt += outputArray[i-1][j];
				neighborInt += outputArray[i-1][j-1];
				outputArray[i][j] = neighborInt;
			}
		}
	}
}
