#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputString;
	getline( cin, inputString);
	int alphabetTab = 0;
	int alphabet[26];
	int flag = 0;
	for(int i = 0; i < 26; i++){
		alphabet[i] = 0;
	}

	//cout << inputString << endl;
	for(int i = 0; i < inputString.length(); i++){
		int insertNum = (tolower(inputString[i]) - 'a');
		if(insertNum < 0 || insertNum > 25){
			continue;
		}
		if(alphabet[insertNum] == 0){
			alphabetTab++;
		}
		if(alphabetTab >= 26){
			flag = 1;
			break;
		} else {
			alphabet[insertNum]++;
		}
	}

/*	for(int i = 0; i < 26; i++){
		cout << alphabet[i] << endl;
	}*/

	if(flag){
		cout << "pangram" << endl;
	} else {
		cout << "not pangram" << endl;
	}

	return 0;
}