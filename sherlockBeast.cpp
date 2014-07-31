/*
	Solution works and the first logic is good just
	case by case logic is ugly looking
	work on algorithm 
*/

#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	for(int i = 0; i < testNum;i++){
		long digits;
		cin >> digits;
		string answer = "";

		while(digits > 10){
			digits -= 3;
			answer += "555";
		}

		if(((digits - 3) % 5 == 0) && (digits != 3)){
			answer += "555";
			digits -= 3;
		}

		if(digits < 3 || digits == 7 || digits == 4){
			cout << -1 << endl;
			continue;
		}

		//if 3
		if(digits % 3 == 0){
			for(int j = 0; j < digits; j++){
				answer += '5';
			}
		}

		//if 5
		if(digits % 5 == 0){
			for(int j = 0; j < digits; j++){
				answer += '3';
			}
		}



		cout << answer << endl;
	}

	return 0;
}