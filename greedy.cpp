#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int numToys, money, numBought, i;
	cin >> numToys >> money;

	long toyPrices[numToys];
	numBought = 0;

	for(i = 0; i < numToys;i++){
		cin >> toyPrices[i];
	}

	sort(toyPrices, toyPrices + numToys);
	i = 0;

	while(1){
		if(money - toyPrices[i] < 0){
			break;
		}
		money -= toyPrices[i];
		numBought++;
		i++;
	}

	cout << numBought << endl;

	return 0;
}