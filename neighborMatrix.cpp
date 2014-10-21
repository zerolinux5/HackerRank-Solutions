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
				int neighborInt = inputArray[i+1][j];
				neighborInt += inputArray[i][j+1];
				neighborInt += inputArray[i+1][j+1];
				outputArray[i][j] = neighborInt;
				//bottom left corner
			} else if ((i == sizeM - 1) && (j == 0)){
				int neighborInt = inputArray[i-1][j];
				neighborInt += inputArray[i-1][j+1];
				neighborInt += inputArray[i][j+1];
				outputArray[i][j] = neighborInt;
				//top right corner
			} else if (i == 0 && (j == sizeN - 1)) {
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i+1][j-1];
				neighborInt += inputArray[i+1][j];
				outputArray[i][j] = neighborInt;
				//bottom right corner
			} else if ((i == sizeM - 1) && (j == sizeN - 1)){
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i-1][j];
				neighborInt += inputArray[i-1][j-1];
				outputArray[i][j] = neighborInt;
				//top row
			} else if (i == 0){
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i][j+1];
				neighborInt += inputArray[i+1][j-1];
				neighborInt += inputArray[i+1][j+1];
				neighborInt += inputArray[i+1][j];
				outputArray[i][j] = neighborInt;
				//bottom row
			} else if (i ==  sizeM - 1){
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i][j+1];
				neighborInt += inputArray[i-1][j-1];
				neighborInt += inputArray[i-1][j+1];
				neighborInt += inputArray[i-1][j];
				outputArray[i][j] = neighborInt;
				//left column
			} else if (j == 0){
				int neighborInt = inputArray[i][j+1];
				neighborInt += inputArray[i-1][j];
				neighborInt += inputArray[i-1][j+1];
				neighborInt += inputArray[i+1][j];
				neighborInt += inputArray[i+1][j+1];
				outputArray[i][j] = neighborInt;
				//right column
			} else if (j == sizeN - 1){
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i-1][j];
				neighborInt += inputArray[i-1][j-1];
				neighborInt += inputArray[i+1][j];
				neighborInt += inputArray[i+1][j-1];
				outputArray[i][j] = neighborInt;
				//anything else
			} else {
				int neighborInt = inputArray[i][j-1];
				neighborInt += inputArray[i][j+1];
				neighborInt += inputArray[i-1][j];
				neighborInt += inputArray[i-1][j-1];
				neighborInt += inputArray[i-1][j+1];
				neighborInt += inputArray[i+1][j];
				neighborInt += inputArray[i+1][j-1];
				neighborInt += inputArray[i+1][j+1];
				outputArray[i][j] = neighborInt;

			}
		}
	}

	//print out
	for(int i = 0; i < sizeM; i++){
		for(int j = 0; j < sizeN; j++){
			cout << outputArray[i][j] << " ";
		}
		cout << endl;
	}
}
