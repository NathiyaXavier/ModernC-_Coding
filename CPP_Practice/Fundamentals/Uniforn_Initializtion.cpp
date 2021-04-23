#include <iostream>
#include <cstdint>

using namespace std;

//To learn uniform initialization
int main() {

	int int_a_valueinit{};		//value init
	int int_b_directinit{ 5 };	//direct init

	char char_c_valueinit[10]{}; //value init
	char char_d_directinit[20]{"Hello world"};//direct init

	float float_a{ 1.0 };

	//int value1(10); //Most vexing parse - consider as a function
	int int_a = float_a;  //direct assignment - don't thro error

	//Uncommenting below code thro error - narrowing conversion
	//int int_a {float_a};

	//dynamic memory allcoation
	int* p = new int{555};
	char* c1 = new char[8]{};
	char* c2 = new char[50]{"Hello world"};

	//varaible display
	cout << "int_a_valueinit : " << int_a_valueinit << endl;
	cout << "int_b_directinit : " << int_b_directinit << endl;
	cout << "char_c_valueinit : " << char_c_valueinit << endl;
	cout << "char_d_directinit : " << char_d_directinit << endl;
	cout << "int_a : " << int_a << endl;

	//dynamic variable display
	cout << "* p : " << *p << endl;
	cout << "* c1 : " << *c1 << endl;
	cout << "* c2 : " << *c2 << endl; //display first char
}