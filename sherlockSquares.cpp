#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int min, max;
		cin >> min >> max;
		int numOfSquares = 0;
		int i = 1;
		int square = pow(i, 2);

		//Logic
		while(square <= max){
			if(square < min){
			} else {
				numOfSquares++;
			}
			i++;
			square = pow(i,2);
		}

		cout << numOfSquares << endl;
	}

	return 0;
}