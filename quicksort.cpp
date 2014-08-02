#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> quick(vector <int>  ar, int ar_size) {
	if(ar_size == 1){
		return ar;
	} else if(ar_size == 2){
		if(ar.front() > ar.back()){
			ar.push_back(ar.front());
			ar.erase(ar.begin());
		}
		cout << ar.front() << " " << ar.back() << endl;
		return ar;
	} else {
		int newPivot = ar.front();
		ar.erase(ar.begin());
		vector<int> smaller;
		vector<int> bigger;
		while(ar.size()){
			int numCheck = ar.front();
			ar.erase(ar.begin());
			if(numCheck > newPivot){
				bigger.push_back(numCheck);
			} else {
				smaller.push_back(numCheck);
			}
		}

		ar.push_back(newPivot);
		if(bigger.size() == 0){
			vector<int> newFront = quick(smaller, smaller.size());
			newFront.insert(newFront.end(), ar.begin(), ar.end());

			for(int i = 0; i < newFront.size();i++){
				cout << newFront.at(i) << " ";
			}
			cout << endl;

			return newFront;			
		} else if (smaller.size() == 0){
			vector<int> newBack = quick(bigger, bigger.size());
			ar.insert(ar.end(), newBack.begin(), newBack.end());

			for(int i = 0; i < ar.size();i++){
				cout << ar.at(i) << " ";
			}
			cout << endl;

			return ar;	
		} else {
			vector<int> newFront = quick(smaller, smaller.size());
			vector<int> newBack = quick(bigger, bigger.size());

			ar.insert(ar.end(), newBack.begin(), newBack.end());
			newFront.insert(newFront.end(), ar.begin(), ar.end());

			for(int i = 0; i < newFront.size();i++){
				cout << newFront.at(i) << " ";
			}
			cout << endl;

			return newFront;
		}
	}
}

int main(void) {
   	vector <int>  _ar;
   	int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   _ar.push_back(_ar_tmp); 
	}

	_ar = quick(_ar, _ar_size);
   
   return 0;
}
