#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int num, diff;
	cin >> num >> diff;
	
	int array[num];

	for(int i = 0; i < num; i++){
		cin >> array[i];
	}

	sort(array, array+num);
	for(int i = 0; i < num;i++){
		cout << array[i];
	}

	return 0;

}
