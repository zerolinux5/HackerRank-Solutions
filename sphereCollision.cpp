#include <iostream>
#include <math.h>

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

		int dist = sqrt(pow((s1.x - s2.x), 2) + pow((s1.y - s2.y), 2) + pow((s1.z - s2.z), 2));
		dist -= (s1.radius + s2.radius);
		if(dist <= 0){
			cout << "NO" << endl;
			continue;
		}

	}

	return 0;
}