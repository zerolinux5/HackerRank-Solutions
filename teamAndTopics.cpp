#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int people, topics;
	cin >> people >> topics;

	string peopleTopicArray[500];
	for(int i = 0; i < people; i++){
		cin >> peopleTopicArray[i];
	}

	cout << endl;

	for(int i = 0; i < people; i++){
		cout << strtol(peopleTopicArray[i],NULL,2) << endl;
		cout << peopleTopicArray[i] << endl;
	}

/*	cout << endl;
	int max = 0;
	for(int i = 0; i < (people - 1); i++){
		for(int j = i+1; j< people; j++){
			int bitOr = peopleTopicArray[i] | peopleTopicArray[j];
			cout << i << " And " << j << " " << bitOr << endl;
			if(bitOr > max){
				max = bitOr;
			}
		}
	}*/

	//cout << max << endl;



	return 0;
}