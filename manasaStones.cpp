#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for(int i = 0; i < num; i++){
		//rock number, a, b declaration
		int rockNum;
		cin >> rockNum;

		int a;
		cin >> a;

		int b;
		cin >> b;
		//logic
		if(a == b){
			cout << a * (rockNum - 1) << endl;
			continue;
		}

		if(a < b){
			int t = rockNum - 1;
			for(int j = 0; j < rockNum; j++, t--){
				cout << t*a + j*b << " ";
			}
			cout << endl;
		} else {
			int t = rockNum - 1;
			for(int j = 0; j < rockNum; j++, t--){
				cout << t*b + j*a << " ";
			}
			cout << endl;		}
	}

	return 0;
}