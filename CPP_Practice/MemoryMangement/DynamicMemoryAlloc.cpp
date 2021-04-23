#include <iostream>
#include <cstdint>

using namespace std;

//Demo on dynamic memory allocation - single value, 1D & 2D array

//Dynamic memory allocation of one varible
void DynamicAllocOneVar()
{
	int32_t* ptr = new int32_t; //allocate variable with size of 16 bit

	//asign some value
	*ptr = 10;

	//display ptr value
	cout << "ptr value" << *ptr;
	cout << endl;

	delete ptr; //free the mmeory to avoid memory leak
	ptr = nullptr;	// make ptr to null becoz after delete also ptr points to same address
}

//Dynamic memory allocation of 1D array
void DynamicAlloc1DArray()
{
	int32_t* ptr = new int32_t[10]; //allocate variable with size of 16 bit

	//Assign i value to the array
	for (int8_t i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}

	delete [] ptr; //free the mmeory to avoid memory leak
	ptr = nullptr;	// make ptr to null becoz after delete also ptr points to same address
}

//Dynamic memory allocation of 2D array array[row=2][col=3]
void DynamicAlloc2DArray()
{
	int32_t* col1 = new int32_t[3]{ 1,2,3 }; //allocate variable with size of 16 bit - do uniform init
	int32_t* col2 = new int32_t[3]{ 4,5,6 }; //allocate variable with size of 16 bit - do uniform init

	int32_t **rows = new int32_t *[2];
	rows[0] = col1;
	rows[1] = col2;

	cout << "0th row and 2nd col value : " << rows[0][2];

	delete []col1;
	delete []col2;
	delete[]rows;

	col1 = nullptr;
	col2 = nullptr;
	rows = nullptr;

}

int main() {
	DynamicAllocOneVar();
	DynamicAlloc1DArray();
	DynamicAlloc2DArray();
	return 0;
}