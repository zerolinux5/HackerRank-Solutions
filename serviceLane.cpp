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

	cout << "Size:" << size << " testNum:" << testNum << endl;	
	return 0;
}
