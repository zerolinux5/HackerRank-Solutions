#include <iostream>
#include <string>

using namespace std;

int arrayCheck(string input, char charCmp){
	for(int i = 0; i < input.size(); i++){
		if (charCmp == input.at(i)){
			return 1;
		}
	}

	return 0;
}

int main()
{
	int rockNum;
	cin >> rockNum;

	string rock1;
	cin >> rock1;

	string finalR;

	for(int i = 0; i < rock1.size(); i++){
		if(!arrayCheck(finalR, rock1.at(i))){
			finalR += rock1.at(i);
		}
	}

	for(int i = 1; i < rockNum; i++){
		string rock2;
		cin >> rock2;

		for(int j = 0; j < finalR.size();){
			if (!arrayCheck(rock2, finalR.at(j))){
				finalR.erase(finalR.begin()+j);
				j = 0;
			} else {
				j++;
			}
		}
	}

	cout << finalR.size();

	return 0;
}
