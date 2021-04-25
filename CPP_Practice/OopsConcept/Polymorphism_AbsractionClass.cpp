//Demo  on polymorphism - Abstraction class
#include <iostream>

//shape Base class
class Shape {

public:
	Shape() {}							//default constructor	
	Shape(double l,double h) :m_length(l), m_height(h){} //parameterized  constructor with more arguments

	void setValue(double l, double h);
	virtual void area() = 0;   // pure virtual function - this method will be overrided in derived class
	virtual void displayArea() { std::cout << "Inside base class"; } // vitual function - this method will be overrided in derived class

protected:
	double m_length{ 0 };
	double m_height{ 0 };
	double m_area{ 0 };
};

//Definition of Base class method
void Shape::setValue(double l, double h) {
	m_length = l;
	m_height = h;
}

// Derived classes
//Square class
class Square :public Shape {

public:
	Square(double l = 0, double h = 0) :Shape(l, h) {}

	void area(){						//parent class function overriding
		m_area = m_length * m_length;		
	}
	void displayArea() {				//parent class function overload
		std::cout <<  "square area : " << m_area << std::endl;
	}
};
//Rectangle class
class Rectangle :public Shape {

public:

	Rectangle(double l = 0, double h = 0) :Shape(l, h) {}

	void area() {						//parent class function overriding
		m_area = m_length * m_height;		
	}
	void displayArea() {
		std::cout << "Rectangle area : " << m_area << std::endl;
	}
};
//Triangle class
class Triangle :public Shape {

public:
	Triangle(double l = 0, double h = 0) :Shape(l, h) {}

	void area() {								//parent class function overriding
		m_area = (m_length * m_height)/2;			
	}

	void displayArea() {
		std::cout << "Triangle area : " << m_area << std::endl;
	}
};

// Main function for the program
int main(){

	Shape *shape;	

	Rectangle rectangle(5.0, 6.0);
	Square square(5.0, 5.0);
	Triangle triangle(5.0, 5.0);

	// Rectangle area display
	shape = &rectangle;   // assign rectangle object address 	
	shape->area();
	shape->displayArea();

	// Square area display
	shape = &square;     // assign square object address 
	shape->area();
	shape->displayArea();

	// Triangle area display
	shape = &triangle;     // assign triangle object address 
	shape->area(); 
	shape->displayArea();

	// Triangle area display
	shape = &triangle;     // assign triangle object address 
	shape->setValue(10.0, 10.0); // Assign new value
	shape->area();
	shape->displayArea();
	

}