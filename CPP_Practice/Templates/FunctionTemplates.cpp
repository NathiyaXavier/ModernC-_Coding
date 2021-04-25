//Demo on Function templateTemplates
#include <iostream>

//Function template
template<typename T>
void print(T value) {
	std::cout << "Value : " << value << std::endl;
}

/********
// w/o template - 3 different function implementation required
void print(int value) {
	std::cout << "Value : " << value << std::endl;
}

void print(double value) {
	std::cout << "Value : " << value << std::endl;
}

void print(std::string value) {
	std::cout << "Value : " << value << std::endl;
}******/

int main() {

	print(10);
	print(155.5);
	print("Templates");
	return 0;
}

