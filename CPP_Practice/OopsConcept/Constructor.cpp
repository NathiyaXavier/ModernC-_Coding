#include <iostream>

using namespace std;

class Box {

	public:
	Box() {}		//default constructor

	//Initialize the Box with equal dimention
	explicit Box(int i) : m_width(i), m_length(i), m_height(i)
	{}

	//Initialize the Box with different dimention
	Box(int x, int y, int z) : m_width(x), m_length(y), m_height(z)
	{}

		// Box volume calculation
	int volume(){ return (m_width * m_length * m_height); }

private:
	//Initialize with zero otherwise by default carbage value will be assigned
	int m_width{ 0 };
	int m_length{ 0 };
	int m_height{ 0 };

};

int main() {

	Box b1; //call default constructor
	Box b2(5); // Assign all dimention uniformly  - width, length,height
	Box b3(2, 4, 5); // Assign all dimention different values

	// To print all box volume
	cout << "Box b1 volume : " << b1.volume() << endl;
		cout << "Box b2 volume : " << b2.volume() << endl;
	cout << "Box b3 volume : " << b3.volume() << endl;

	return 0;
}