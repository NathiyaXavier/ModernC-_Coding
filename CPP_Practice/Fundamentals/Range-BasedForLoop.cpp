#include <iostream>
#include <cstdint>

using namespace std;

//Demo on Range-based array

//display const value
int main() {

	int16_t array[]{ 1,2,3,4 };

	//display array value
	cout << " printing array value " << endl; //cannot manipulate while const value
	for (const auto x : array) {
		//uncommenting will thro error
		//x += 2;
		cout << x << '\t';
	}
	cout << endl;

	//manipulating and printing array value
	cout << "manipulating and printing array value " << endl;
	for (auto x : array) {
		x += 2;
		cout << x << '\t';
	}
	cout << endl;
	return 0;
}