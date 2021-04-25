//Demo on operator overloading
#include <iostream>

// Class for co-ordination
class Position {

public:
	int x{ 5 };		//init x co-ordinate
	int y{ 10 };     //init x co-ordinate

	// setting up x,y co-ordinates
	void SetValue(int value_x, int value_y) {

		x = value_x;
		y = value_y;
	}

	//operator overloading of + operator
	Position operator+(Position pos)
	{
		Position pos3;
		pos3.x = x + pos.x;
		pos3.y = y + pos.y;
		return pos3;
	}

	//operator overloading of == operator
	bool operator==(Position pos)
	{
		if ((x == pos.x) && (y == pos.y))
			return true;
		else
			return false;
	}
};

// Main function for the program
int main() {

	Position pos1, pos2,pos3;

	pos1.SetValue(25, 30);
	pos2.SetValue(25, 30);
	
	//add two co-ordinates using operator overloading
	pos3 = pos1 + pos2;
	std::cout << "summing pos1 and pos2 : " << pos3.x << " & " << pos3.y << '\n';

	//comparing two co-ordinates using operator overloading
	if (pos1 == pos2) {
		std::cout << "Both the posiitons are same" <<'\n';
	}
	else {
		std::cout << "Both the posiitons are different" << '\n';
	}

	//set new values
	pos1.SetValue(55, 30);
	pos2.SetValue(25, 30);

	//comparing two co-ordinates using operator overloading
	if (pos1 == pos2) {
		std::cout << "Both the posiitons are same" << '\n';
	}
	else {
		std::cout << "Both the posiitons are different" << '\n';
	}

	return 0;
}

