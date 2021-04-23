#include <iostream>
#include <cstdint>

using namespace std;

//Demo on inline function
inline int32_t square(const int16_t num) {
	return(num * num);
}

int main(){

	int16_t number;
	int32_t squaredVal;

	//Get input value
	cout << "Enter number to be squared : ";
	cin >> number;

	//call square function
	squaredVal = square(number);

	//display squared value
	cout << "square of " << number << " is " << squaredVal;
	return 0;
}

/* About - inline function
* -> use inline function with less no of instrution.  This may increase the code memory
* -> check optimization option enabled in project option
* * -> inline function reduce function calling overhead - function call will be replaced  with function intruction during pre-processing stage
*/