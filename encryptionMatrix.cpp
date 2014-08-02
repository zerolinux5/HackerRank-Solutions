#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string inputString;
	cin >> inputString;

	int min = floor(sqrt(inputString.size()));
	int max = ceil(sqrt(inputString.size()));

	if(pow(min, 2) >= inputString.size()){
		char wordMatrix[min][min];
		int count = 0;
		for(int i = 0; i < min; i++){
			for(int j = 0; j < min;j++){
				if( count >= inputString.size()){
					inputString += " ";
				}
				wordMatrix[i][j] = inputString.at(count);
				count++;
			}
		}

		count = 0;
		for(int j = 0; j < min; j++){
			//if(flag){
				for(int i = 0; i < min; i++){
					if( (int)(wordMatrix[i][j]) == 32){
						continue;
					}
					cout << wordMatrix[i][j];
					//count++;
				}
				cout << " ";
			//} else {
			//	break;
			//}
		}

	} else if ( (min * max) >= inputString.size()){
		char wordMatrix[min][max];
		int count = 0;
		for(int i = 0; i < min; i++){
			for(int j = 0; j < max;j++){
				if( count >= inputString.size()){
					inputString += " ";
				}
				wordMatrix[i][j] = inputString.at(count);
				count++;
			}
		}

		count = 0;
		for(int j = 0; j < max; j++){
			//if(flag){
				for(int i = 0; i < min; i++){
					if( (int)(wordMatrix[i][j]) == 32){
						continue;
					}
					cout << wordMatrix[i][j];
					//count++;
				}
				cout << " ";
			//} else {
			//	break;
			//}
		}
	} else {
		char wordMatrix[max][max];
		int count = 0;
		for(int i = 0; i < max; i++){
			for(int j = 0; j < max;j++){
				if( count >= inputString.size()){
					inputString += " ";
				}
				wordMatrix[i][j] = inputString.at(count);
				count++;
			}
		}

		count = 0;
		for(int j = 0; j < max; j++){
			//if(flag){
				for(int i = 0; i < max; i++){
					if( (int)(wordMatrix[i][j]) == 32){
						continue;
					}
					cout << wordMatrix[i][j];
					//count++;
				}
				cout << " ";
			//} else {
			//	break;
			//}
		}
	}

	cout << endl;

	return 0;
}