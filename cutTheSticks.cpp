#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int numOfSticks;
	cin >> numOfSticks;
	int stickArray[numOfSticks];
	for(int i = 0; i < numOfSticks;i++){
		cin >> stickArray[i];
	}
	int start = 0;
	int end = numOfSticks;

	while(numOfSticks != 0){
		cout << numOfSticks << endl;
		sort(stickArray, stickArray + end);
		int cut = stickArray[start];


		for(int i = start; i < end;i++){
			if(stickArray[i] - cut <= 0){
				start++;
				numOfSticks--;
			}
			stickArray[i] -= cut;
			//cout << stickArray[i];
		}
		//cout << endl;
	}

	return 0;
}