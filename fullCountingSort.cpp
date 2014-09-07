#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	string stringArray[100];
	for(int i = 0; i < 100; i++){
		stringArray[i] = "";
	}

	for(int i = 0; i < size; i++){
		int nextNum;
		string nextString;
		cin >> nextNum;
		cin >> nextString;
		nextString = nextString + " ";
		if(i < size/2){
			stringArray[nextNum] += "- ";
		} else {
			stringArray[nextNum] += nextString;
		}
	}

	for(int i = 0; i < 100; i++){
		cout << stringArray[i];
	}
	cout << endl;

	return 0;
}

