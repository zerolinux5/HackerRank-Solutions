#include <iostream>

using namespace std;

int main()
{
	int searchItem;
	cin >> searchItem;

	int size;
	cin >> size;

	int location = 0;
	while(size--){
		int newItem;
		cin >> newItem;
		if (newItem == searchItem){
			cout << location << endl;
		}
		location++;
	}
	return 0;
}
