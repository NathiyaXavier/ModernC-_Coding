#include <iostream>

//Demo on auto storage class

//display const value
int main() {

	auto input1 = 1; //int data type
	auto input2 = 1.0;	//float data type
	auto input3 = 'c'; //char datatype

	//assign int address to pointer
	auto ptr = &input1;
	return 0;
}