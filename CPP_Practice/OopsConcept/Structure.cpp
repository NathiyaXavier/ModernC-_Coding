#include <iostream>

//To create struture for carModel
typedef struct  {
	std::string name;
	int16_t number;
	float weight;

}CarModel;

int main() {
	CarModel BMW{"BMW_X5",5,250 }; //create struct instance with uniform intializer
	std::cout << BMW.name;
	return 0;
}