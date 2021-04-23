#include <iostream>
#include <cstdint>

using namespace std;

//Demo on const qualifier using reference
void print_constValue(const int16_t& num1, const int16_t& num2) {

	cout << "Printinf out given data :";
	cout << "num1 :" << num1 << "   num2 :" << num2 << endl;

	// uncommenting below code will thro error
	//num1 = 100;
	//num2 = 1000;

}

//display const value
int main() {

	const int16_t num1{ 555 }, num2{ 111 };

	print_constValue(num1, num2);

	return 0;
}