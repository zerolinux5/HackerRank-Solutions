#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	unsigned long arrayA[N];
	unsigned long arrayB[M];
	unsigned long arrayC[M];

	for(int i = 0; i < N; i++){
		cin >> arrayA[i];
	}

	for(int i = 0; i < M; i++){
		cin >> arrayB[i];
	}

	for(int i = 0; i < M; i++){
		cin >> arrayC[i];
	}	

	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if((j+1) % arrayB[i] == 0){
				arrayA[j] = ((arrayA[j] * arrayC[i]) % 1000000007);
			}
		}
	}

	for(int i = 0; i < N; i++){
		cout << arrayA[i] << " ";
	}
	cout << endl;
	return 0;
}