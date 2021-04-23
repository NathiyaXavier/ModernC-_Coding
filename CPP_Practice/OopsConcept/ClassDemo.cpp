#include <iostream>

// To create Car class
class Car {

public:
	Car() {} //default constructor	
	Car(float speed_x, float fuel_y, int passen_z) :speed(speed_x), fuel(fuel_y), passensers(passen_z) {} //parameterized constructor
	// Methods
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassensers(int count);
	void Dashboard();

private:
	float speed{ 0 };
	float fuel{ 0 };
	int passensers{ 0 };
};
/** Defining the Car class methods outside the class**/
void Car::FillFuel(float amount)
{
	fuel = amount; //To fill the fuel vale
}

void Car::Accelerate()
{
	speed+=10;			//Speed will be incrememented and fuel will be reduced
	fuel -= 0.5f;
}

void Car::Brake()
{
	speed = 0;		// amke speed zero in brake method
}
void Car::AddPassensers(int count) 
{
	passensers = count;  //Assign count ot no.of.passengers
}
//Display in dashboard
void Car::Dashboard()
{
	using namespace std;
	cout << "Fuel : " << fuel << endl;
	cout << "speed : " << speed << endl;
	cout << "passensers : " << passensers << endl;
}
/***Car class method define ends here***/

int main() {
	Car car{ 0.0,50.0,1 };

	car.FillFuel(100.0);
	car.Brake();
	car.Accelerate();	
	car.AddPassensers(4);
	car.Dashboard();
	return 0;
}
