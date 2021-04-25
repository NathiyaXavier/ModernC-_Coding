//Demo on callback and function pointer
#include <iostream>
#include <cstdint>

//Bubble sort using function pointer
void sort(int32_t arr[],const int32_t size, bool (*fpComp)(int32_t, int32_t)) {
	int temp;
	for (int32_t i = 0; i < size; i++)
	{		for (int32_t j = 0; j < (size - 1-i); j++) {
			if (fpComp(arr[j],arr[j+1])) {    // call asecding or desending operator decision
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
bool compareDescend(const int32_t x, const int32_t y) {
	return(x > y);
}

bool compareAscend(const int32_t x, const int32_t y) {
	return(x < y);
}
//Display array values
void showArray(const int32_t array[], const int32_t size) {

	for (int32_t i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

//main program
int main() {

	int32_t array[]{1,5,7,3,9,11,2,10,4,9,12};
	int8_t sortingOrder;
	bool (*fpComp)(int32_t, int32_t) { nullptr }; //assign function pointer with null ptr

	//Get sorting order  from user
	std::cout << " Enter 0/1 : 0 - Descending order sorting, 1 - Ascending order sorting : ";
	std::cin >> sortingOrder;
	
	int32_t size = sizeof(array)/sizeof(array[0]); //To calculate the size of array 		
	std::cout << " Array before sorting " << std::endl;
	showArray(array, size);						//Display array values

	if (sortingOrder==0)
		fpComp = &compareDescend;   //assign descending func ptr to fpcomp
	else
		fpComp = &compareAscend;    //assign ascending func ptr to fpcomp
	 
	//Sort the array
	sort(array, size, fpComp);

	//Display array values
	std::cout << " Array after sorting " << std::endl;	
	showArray(array, size);

	return 0;
}

