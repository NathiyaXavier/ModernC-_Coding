#include <iostream>
#include <cstdint>

using namespace std;
//prototype or declaration
void clac_Circle(float r, float& area, float& cicum, const float PI);

//circle math calculation definition using reference
void clac_Circle(float r, float& area, float& cicum, const float PI) {

	area = PI * r * r;
	cicum = 2*PI * r;

}

//Demo on Const qualifier using circle area and circumference calc
int main() {

	float radius{};
	float areaCircle, circumCircle;

	const float PI{ 3.14159f };

	cout << "Enter  radius value :";
	cin >> radius;

	//calculate area and circum of circle usinf reference concept
	clac_Circle(radius, areaCircle, circumCircle,PI);

	cout << "Display circle area and circumeference :  " << endl;
	cout << " Area : " << areaCircle << "  Circumeference : " << circumCircle;

	return 0;
}