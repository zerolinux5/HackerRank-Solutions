#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
	string testNum;
	getline(cin, testNum);
	int testNumInt = atoi(testNum.c_str());

	while(testNumInt--){
		string inputLine;
		getline(cin, inputLine);
		cout << inputLine << endl;
	}
}
