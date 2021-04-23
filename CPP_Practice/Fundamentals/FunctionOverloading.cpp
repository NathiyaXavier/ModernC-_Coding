#include <iostream>
#include <cstdint>

using namespace std;

//Demo on function overloading

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

//Display values
void showValue(const int16_t num1, const int16_t num2,const string status) {

	cout << "pointer: num1 and num2 " << status << " swap " << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
}

int main() {

	int16_t num1{ 555 }, num2{ 111 };

	//swap using pointer
	showValue(num1, num2,"before");
	swap(&num1, &num2);	
	showValue(num1, num2,"after");

	//update num1 and num2 with new values
	num1 = 1000;
	num2 = 999 ;

	//swap using reference
	showValue(num1, num2,"before");
	swap(num1, num2);
	showValue(num1, num2, "after");

	return 0;
}