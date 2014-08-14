#include <iostream>

using namespace std;

int main(){
	int testNum;
	cin >> testNum;

	while(testNum--){
		long inputNum;
		cin >> inputNum;
		cout << ++inputNum << endl;
	}

	return 0;
}