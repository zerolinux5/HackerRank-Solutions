#include <iostream>
#include <math.h>

using namespace std;

typedef struct Points 
{
	int x;
	int y;
	int z;
} Points; 

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		Points point1, point2, point3, point4;
		cin >> point1.x >> point1.y >> point1.z;
		cin >> point2.x >> point2.y >> point2.z;
		cin >> point3.x >> point3.y >> point3.z;
		cin >> point4.x >> point4.y >> point4.z;

		Points vector1;
		vector1.x = point2.x - point1.x;
		vector1.y = point2.y - point1.y;
		vector1.z = point2.z - point1.z;

		Points vector2;
		vector2.x = point3.x - point1.x;
		vector2.y = point3.y - point1.y;
		vector2.z = point3.z - point1.z;

		Points vector3;
		vector3.x = point4.x - point1.x;
		vector3.y = point4.y - point1.y;
		vector3.z = point4.z - point1.z;

		int deter1 = vector1.x * ((vector2.y * vector3.z) - (vector3.y * vector2.z));
		int deter2 = vector2.x * ((vector1.y * vector3.z) - (vector3.y * vector1.z));
		int deter3 = vector3.x * ((vector1.y * vector2.z) - (vector2.y * vector1.z));

		int result = deter1 - deter2 + deter3;
		if(result == 0){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}