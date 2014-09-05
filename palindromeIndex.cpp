#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		string inputString;
		cin >> inputString;
		int location = -1;

		for(int i = 0; i < inputString.length()/2;i++){
			if(inputString[i] != inputString[inputString.length() - (i + 1)]){
				if(inputString[i+1] == inputString[inputString.length() - (i + 1)]){
					location = i;
					break;
				} else if (inputString[i] == inputString[inputString.length() - (i + 2)]){
					location = inputString.length() - (i + 1);
					break;
				}
			}
		}

		cout << location << endl;

	}

	return 0;
}