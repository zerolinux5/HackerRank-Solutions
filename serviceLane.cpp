#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	string mystring;
	getline(cin, mystring);
	size_t breakPt = mystring.find(" ");
	int size = atoi(mystring.substr(0,breakPt).c_str());
	int testNum = atoi(mystring.substr(breakPt+1).c_str());

	int lanes[size];

	getline(cin, mystring);
	for(int i = 0; i < size; i++){
		size_t breakNums = mystring.find(" ");
		lanes[i] = atoi(mystring.substr(0,breakNums).c_str());
		mystring = mystring.substr(breakNums+1);		
	}
	
	for(int i = 0; i < size; i++){
		cout << lanes[i] << endl;
	}

	return 0;
}
