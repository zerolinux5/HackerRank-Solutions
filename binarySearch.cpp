#include <iostream>

using namespace std;

int binarySearch(int start, int end, int search, int array[])
{
	if((end - start) <= 0){
		return 0;
	}
	int mid = (end + start)/2;
	if(array[mid] == search){
		return 1;
	} else if (array[mid] > search){
		return binarySearch(start,mid - 1,search,array);
	} else {
		return binarySearch(mid + 1,end,search,array);
	}
}

int main()
{
	int size, search;
	cin >> size >> search;
	
	int inArray[size];
	for(int i = 0; i < size; i++){
		cin >> inArray[i];
	}

	if( binarySearch(0, size, search, inArray)){
		cout << search << " is in the array" << endl;
	} else {
		cout << search << " isn't in the array" << endl;
	}

	return 0;
}
