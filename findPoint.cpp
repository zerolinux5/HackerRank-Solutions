#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int pointSX = 2*x2 - x1;
		int pointSY = 2*y2 - y1;
		cout << pointSX << " " << pointSY << endl;
	}

	return 0;
}