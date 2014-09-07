#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int numArray[size];
	string stringArray[size];

	for(int i = 0;i < size; i++){
		if(i < size/2){
			cin >> numArray[i];
			cin >> stringArray[i];
			stringArray[i] = "-";
		} else {
			cin >> numArray[i];
			cin >> stringArray[i];
		}
	}

	return 0;
}

