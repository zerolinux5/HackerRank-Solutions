#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
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

		//set up the vector and add the base cases
		vector<int> v;

		v.push_back(0);
		v.push_back(0);

		//logic
		for(int i = 1; i < rockNum;i++){
			for(int n = 1; n <= pow(2, i); n++){
				int newInt = v.front();
				v.push_back(newInt + a);
				v.push_back(newInt + b);
				v.erase(v.begin());
			}
		}

		
		for(int i = 0;i < v.size(); i++){
			int lastPosition = 0;
			for(int j = i+1; j < v.size();j++){
				if(v.at(j) == v.at(i)){
					lastPosition = max(j - 2, i);
					v.erase(v.begin() + j);
					j = lastPosition;
				}
			}
		}

		for(int i = 0; i < v.size(); i++){
			cout << v.at(i) << " ";
		}
		cout << endl;
	}

	return 0;
}