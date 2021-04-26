//Demo on recursive function
#include <iostream>
#include <cstdint>

//factorial function using recursive
// Eg: 5! = 5*4*3*2*1
double factorial(const int32_t n) {

	if (n > 1)
	{
		return(n * factorial(n - 1));
	}
	else
		return 1;

}

//main program;
int main() {

	int32_t n_value;
	std::cout << "Enter values for factorial calculation : ";
	std::cin >> n_value;

	std::cout << "factorial of " << n_value << " is : " << factorial(n_value);
	std::cout << '\n';
	return 0;
}