#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		int num;
		cin >> num;

		int result = 2;
		num--;
		while(num--){
			result *= 2;
			result %= 100000;
		}
		result--;
		cout << result << endl;
	}
	return 0;
}