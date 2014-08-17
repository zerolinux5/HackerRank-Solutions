#include <iostream>
#include <math.h>

using namespace std;

typedef struct Point{
	int x;
	int y;
	int z;
} Point;

typedef struct Sphere{
	Point origin;
	int radius;
	Point movement;
} Sphere;

int main()
{
	int testNum;
	cin >> testNum;

	while(testNum--){
		//getting the input and putting it into spheres
		int r1, r2;
		int x, y, z;
		int xA, yA, zA;
		cin >> r1 >> r2;
		cin >> x >> y >> z;
		cin >> xA >> yA >> zA;
		Point origin1 = {x,y,z};
		Point move1 = {xA,yA,zA};
		Sphere s1 = {origin1, r1, move1};
		cin >> x >> y >> z;
		cin >> xA >> yA >> zA;
		Point origin2 = {x,y,z};
		Point move2 = {xA,yA,zA};
		Sphere s2 = {origin2, r2, origin2};

		//Turning the acceleration of the second one into inverse acceleration of first
		s1.movement.x -= s2.movement.x;
		s1.movement.y -= s2.movement.y;
		s1.movement.z -= s2.movement.z;

		//Check if spheres start together
		int dist = pow((s1.origin.x - s2.origin.x), 2) + pow((s1.origin.y - s2.origin.y), 2) + pow((s1.origin.z - s2.origin.z), 2);
		dist -= pow((s1.radius + s2.radius), 2);
		if(dist <= 0){
			cout << "YES" << endl;
			continue;
		}

		

	}

	return 0;
}