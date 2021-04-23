#include <iostream>
#include <cstdint>

using namespace std;

//Demo on Pointer Vs Reference using swap function

//Pointer demo
void swap(int16_t* x, int16_t* y) {
	int temp;

	if (x != nullptr && y != nullptr) //To avoid run time error
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
}
//Reference demo
void swap(int16_t& x, int16_t& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {

	int16_t num1{ 555 }, num2{ 111 };

	cout << "num1 and num2 before swap " << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	swap_pointer(&num1,&num2);
	//swap(nullptr, nullptr);		//To check run time exception

	swap_reference(num1, num2);

	cout << "num1 and num2 after swap " << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}