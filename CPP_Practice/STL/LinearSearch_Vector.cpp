//Demo on STL - Vector
#include <iostream>
#include <vector>

void fillArray(std::vector<int>& myArray);
void displayArray(std::vector<int>& myArray);

//To fill array using pushback
void fillArray(std::vector<int>& myArray) {

	int input;
	// Enter input value and stops with -1
	std::cout << "Enter input value and stops with -1" << '\n';
	std::cin>> input;

	while (input != -1)
	{
		myArray.push_back(input);
		std::cin >> input;
	}
	
}
//Display array values
void displayArray(std::vector<int>& myArray) {

	std::cout << "Display Array Value" << '\n';

	for (int i = 0; i < myArray.size(); i++)
	{
		std::cout << myArray[i] << '\t';
	}
	std::cout << '\n';


}

// Search key value in a given array
bool linearSearch(std::vector<int>& myArray, int keyValue) {

		for (int i = 0; i < myArray.size(); i++)
	{
			if (myArray[i] == keyValue)
				return true;
	}
		return false;
}

//main program
int main() {

	std::vector<int> myArray;
	int keyValue,result;

	fillArray(myArray);
	displayArray(myArray);

	std::cout << "Enter key value to find"<<'\n';
	std::cin >> keyValue;

	result = linearSearch(myArray, keyValue);

	if (result == true)
		std::cout << "The key is exist";
	else //flase case
		std::cout << "The key is not exist";

	return 0;
}