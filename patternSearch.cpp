#include <iostream>

using namespace std;

int main()
{
	//Take in the values
	int stringLength, patternLength;
	string inputString, patternString;
	int totalCount = 0;

	cin >> stringLength >> patternLength >> inputString >> patternString;

	int step = 0;
	for(int i = 0; i <= (stringLength - patternLength); i++){
		//cout << i << endl;
		if(inputString[i] == patternString[0] || patternString[0] == '*'){
			int flag = 1;
			step = i+1;
			for(int j = 1; j < patternLength; j++){
				if(inputString[step] != patternString[j] && '*' != patternString[j]){
					flag = 0;
					break;
				} else {
					//cout << patternString[j];
				}
				step++;
			}
			//cout << endl;
			if(flag){
				totalCount++;
				i = step;
				i--;
				//cout << i << endl;
			}
		}
	}
	cout << totalCount << endl;
}