#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for(int i = 0; i < num ;i++){
		string word;
		cin >> word;

		int j = 0;
		int t = word.size() - 1;

		int numOps = 0;

		for(; j < (word.size() / 2);j++, t--){
			int beginStr = (int)word.at(j);
			int endStr = (int)word.at(t);

			while(beginStr != endStr){
				if(endStr == 97 && beginStr == 97){
					break;
				}
				if(beginStr < endStr){
					endStr--;
					numOps++;
				} else {
					beginStr--;
					numOps++;
				}
			}
			/*
			//create the char, string, and sstream to convert char to string for fcn
			char newChar = endStr;
			stringstream ss;
			string newString;

			//put char in sstream
			ss << newChar;
			ss >> newString;


			int location = t;
			word.replace(location, 1, newString);
			*/
		}

		cout << numOps << endl;
	}

	return 0;
}