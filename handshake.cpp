#include <iostream>

using namespace std;

int main(){
	int testNum;
	cin >> testNum;

	while(testNum--){
		int peopleNum;
		cin >> peopleNum;

		int result = peopleNum*(peopleNum - 1) / 2;

		cout << result << endl;
	}
}