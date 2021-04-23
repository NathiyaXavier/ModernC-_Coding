#include <iostream>
#include <cstdint>

using namespace std;

//Get name with space using cin.getline function
int main() {

	char name[100];
	cout << "Enter your name : ";
	cin.getline(name, 100, '\n');
	cout << "your name is: " << name << endl;	
}