
//demo on static member and function
#include <iostream>

class Box {

public:
	static int s_objCount;	// declare static member

	Box(float l, float h, float w) :m_length(l), m_height(h), m_width(w) { s_objCount++; } //parameterized constructor

	static int showObjcount() {		//static function
		return s_objCount;
	}

private:
	float m_length{ 0 };
	float m_height{ 0 };
	float m_width{ 0 };
};

//init of static member ( it can be initialized outside the class) -  without init compiler will thro error
int Box::s_objCount = 0;

int main() {

	std::cout << "Obj Count" << Box::showObjcount() << std::endl;  ////static function can be called w/o obj creation

	Box b1{ 1.0,2.0,3.0 }, b2{ 1.0,2.0,3.0 }, b3{ 1.0,2.0,3.0 }; ///object creation

	std::cout << "Obj Count : " << Box::showObjcount();

	return 0;
}