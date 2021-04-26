//Demo on Function pointer and call back
#include <iostream>

enum SortOrder {Descending=0, Ascending};   //enum data type 

//Bubble sorting - Asending and desending order based on function pointer
void BubbelSort( int32_t array[], const int32_t size, bool (*fpComp)(int32_t, int32_t)) {

	for (int16_t i = 0; i < size; i++) {
		for (int16_t j = 0; j < (size - 1 - i); j++)
		{
			if (fpComp(array[j],array[j + 1])) {
				int32_t temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

}

bool CompAscending(int32_t x, int32_t y) { return(x > y); }
bool CompDescending(int32_t x, int32_t y) { return(x < y); }

//Display Array values
void showArray(const int32_t array[], const int32_t size,std::string state) {

	std::cout << '\n';
	std::cout << " The array values " << state << " soritng : ";

	for (int16_t i=0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << '\n';


}
int main() {
	int32_t array[]{ 3,9,10,11,5,6,7 }; //init array with some avlues
	int32_t array_size = sizeof(array) / sizeof(array[0]); //to find the array size
	int16_t sortingOrder{ 0 };
	bool (*fpComp)(int32_t, int32_t) { nullptr };  //init function pointer with null value

	std::cout << "Array size : " << array_size << '\n';   //Display array size

	std::cout << "Enter 0/1: 0-> Desending order, 1-> Asending order : ";
	std::cin >> sortingOrder;

	if (sortingOrder == Descending) {
		fpComp = &CompDescending;
	}
	else if(sortingOrder == Ascending) {
		fpComp = &CompAscending;
	}

	showArray(array, array_size,"Before");  //display array before sorting
	BubbelSort(array, array_size, fpComp);
	showArray(array, array_size, "After");  //display array after sorting

	return 0;
}