#include <iostream>

using namespace std;


int main(){
	int testNum;
	cin >> testNum;

	while(testNum--){
		int num;
		cin >> num;
		int result = 1;
		for(int i = 0; i < (num - 1);i++){
			int newNum;
			cin >> newNum;
			result *= newNum;
			result %= 1234567;
		}

		cout << result << endl;

	}
	return 0;
}