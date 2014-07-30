#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	for(int i = 0; i < count; i++){
		unsigned long num;
		cin >> num;
		int result = 0;
		int modingNum = num;
		while(modingNum != 0){
			int subNum = modingNum % 10;
			if(subNum != 0){
				if (num % subNum == 0){
					result++;
				}
			}
			modingNum /= 10;
		}
		cout << result << endl;
	}

	return 0;
}