#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

	string wordOne, wordTwo;
	cin >> wordOne >> wordTwo;
	int numOfDeletions = 0;

	int alphabet[26];
	for(int i = 0; i < 26;i++){
		alphabet[i] = 0;
	}

	for(int i = 0; i < (wordOne.length()); i++){
		int insertNum = (wordOne[i] - 'a');
		alphabet[insertNum]--;
	}

	for(int i = 0; i < (wordTwo.length()); i++){
		int insertNum = (wordTwo[i] - 'a');
		alphabet[insertNum]++;
	}

	for(int i = 0; i < 26; i ++){
		if(alphabet[i] != 0){
			numOfDeletions += abs(alphabet[i]);
		}
	}

	cout << numOfDeletions << endl;

	return 0;
}