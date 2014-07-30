#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for(int i = 0; i < num; i++){
		double choc;
		cin >> choc;

		double rows = choc/2;
		double collumns = choc/2;
		long squares = rows * collumns;

		printf("%ld\n", squares);
	}

	return 0;
}