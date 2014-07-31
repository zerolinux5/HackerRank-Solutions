#include <iostream>

using namespace std;

int main()
{
	int searchItem;
	cin >> searchItem;

	int size;
	cin >> size;

	int location = 0;

	for(int i = 0; i < size;i++){
		int newItem;
		cin >> newItem;
		if (newItem == searchItem){
			cout << location << endl;
		}
		location++;
	}

	return 0;
}