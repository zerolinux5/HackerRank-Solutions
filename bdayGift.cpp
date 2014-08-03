#include <iostream>

using namespace std;

int main()
{
	int numTimes;
	cin >> numTimes;
	double result = 0;

	while(numTimes--){
		double newNum;
		cin >> newNum;
		result += (0.5 * newNum);
	}

	cout.precision(1);
	cout << fixed;

	cout << result << endl;

	return 1;
}