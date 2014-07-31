#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		int size;
		cin >> size;
		int array[size];
		int flag = 0;
		for(int i = 0; i < size;i++){
			cin >> array[i];
		}

		int location = 0;
		int rightSide = 0;
		int leftSide = 0; 
		int switchNum;
		for(int i = 1; i < size; i++){
			rightSide+= array[i];
		}

		while(location < size){
			if(rightSide == leftSide){
				cout << "YES" << endl;
				flag = 1;
				break;
			}
			rightSide -= array[location+1];
			leftSide += array[location];
			location++;
		}
		if(!flag){
			cout << "NO" << endl;
		}
	}

	return 0;
}