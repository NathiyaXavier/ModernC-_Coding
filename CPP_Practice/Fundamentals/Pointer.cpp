#include <iostream>
#include <cstdint>

using namespace std;

//Demo on pointers
int main() {

	int16_t* ptr{ nullptr }; // To init ptr with nullptr

	//uncommenting this code thro exception - can't read from null ptr
	//cout << "*ptr : " << *ptr << endl;

	int16_t value{ 100 };

	ptr = &value;

	//display value using direct and dereferencing
	cout << "value : " << value << endl;
	
	if(ptr!=nullptr)
	{
		cout << "*ptr : " << *ptr << endl;
	}

	return 0;
}