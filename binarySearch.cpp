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
		return binarySearch(start,mid,search,array);
	} else {
		return binarySearch(mid,end,search,array);
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

	cout << binarySearch(0, size, search, inArray) << endl;

	return 0;
}
