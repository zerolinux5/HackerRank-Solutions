#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int numSize;
	cin >> numSize;
	long nums[numSize] ;

	for(int i = 0; i < numSize; i++){
		cin >> nums[i];
	}

	sort(nums, nums + numSize);
	long minNum = nums[numSize - 1] - nums[0];
	for(int i = 0; i < (numSize - 1); i++){
		long currentDiff = nums[i+1] - nums[i];
		if(currentDiff < minNum){
			minNum = currentDiff;
		}
	}

	for(int i = 0; i < (numSize - 1); i++){
		long currentDiff = nums[i+1] - nums[i];
		if(currentDiff == minNum){
			cout << nums[i] << " " << nums[i+1] << " ";
		}
	}

	cout << endl;
	
	return 0;
}