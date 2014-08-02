#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		int flag = 1;

		int wantPrice;
		cin >> wantPrice;

		int prices;
		cin >> prices;

		int iceCreams[prices];

		for(int i = 0; i < prices; i++){
			cin >> iceCreams[i];
		}
		for(int i = 0; i < prices; i++){
			if(flag){
				for(int j = i+1; j < prices;j++){
					if((iceCreams[i] + iceCreams[j]) == wantPrice){
						cout << (i+1) << " " << (j + 1) << endl;
						flag = 0;
						break;
					}
				}
			} else {
				break;
			}
		}
	}

	return 0;
}