#include <iostream>

using namespace std;

typedef struct Sphere{
	int x;
	int y;
	int z;
	int radius;
	int xAcc;
	int yAcc;
	int zAcc;
} Sphere;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		int r1, r2;
		int x, y, z;
		int xA, yA, zA;
		cin >> r1 >> r2;
		cin >> x >> y >> z;
		cin >> xA >> yA >> zA;
		Sphere s1 = {x, y, z, r1, xA, yA, zA};
		cin >> x >> y >> z;
		cin >> xA >> yA >> zA;
		Sphere s2 = {x, y, z, r2, xA, yA, zA};

	}

	return 0;
}