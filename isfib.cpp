#include <iostream>

using namespace std;

int binarySearch(unsigned long num, unsigned long fibbArray[], int begin, int end)
{

	unsigned long mid = (end + begin)/2;
	if(num > fibbArray[end]){
		return 0;
	} else if (num == fibbArray[end]){
		return 1;
	} else if(num == fibbArray[mid]){
		return 1;
	} else if (mid == begin){
		return 0;
	}else if(num > fibbArray[mid]){
		return binarySearch(num, fibbArray, mid, end);
	} else if (num < fibbArray[mid]){
		return binarySearch(num, fibbArray, begin, mid);
	}
	return 0;
}

int addtoFib(unsigned long num, unsigned long fibbArray[], int flag)
{
	unsigned long fib = fibbArray[flag];
	while(fib < num){
		flag++;
		fibbArray[flag] = (fibbArray[flag-1] + fibbArray[flag-2]);
		fib = fibbArray[flag];
	}
	if(fib == num){
		cout << "IsFibo" << endl;
	} else {
		cout << "IsNotFibo" << endl;
	}

	return flag;
}

int main()
{
	int testNum;
	cin >> testNum;
	int flag = 1;

	unsigned long fibbArray[55];
	for(int i = 0; i < 55; i++){
		if(i == 0){
			fibbArray[i] = 0;
		} else if(i == 1){
			fibbArray[i] = 1;
		} else {
			fibbArray[i] = 9999999999;
		}
	}

	while(testNum--){
		unsigned long num;
		cin >> num;
		if(binarySearch(num, fibbArray, 0, flag)){
			cout << "IsFibo" << endl;
		} else if(fibbArray[flag] > num){
			cout << "IsNotFibo" << endl;
		} else {
			flag = addtoFib(num, fibbArray, flag);
		}

	}

	return 0;
}