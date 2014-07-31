#include <iostream>

using namespace std;

int main()
{
	int numJars, numOps;
	cin >> numJars;
	cin >> numOps;
	unsigned long result = 0;

	for(int i = 0; i < numOps; i++){
		unsigned long jar1, jar2, amount;
		cin >> jar1;
		cin >> jar2;
		cin >> amount;
		
		result += (amount * (jar2 - jar1 + 1));
	}

	result /= numJars; 
	cout << result << endl;

	return 0;
}