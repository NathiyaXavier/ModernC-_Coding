//Demo on destructor
#include <iostream>
#include <string>

class Strings{

public:
	Strings(char* ch);		//declare constructor
	~Strings();				//declare destructor
	void display();

private:
	char* _text;
	int sizeoftext;

};
//define constructor 
Strings::Strings(char* ch) {

	sizeoftext = strlen(ch) + 1;
	_text = new char[sizeoftext];

	if(_text)
		strcpy_s(_text, sizeoftext, ch);
}
//define destructor 
Strings::~Strings(){

	delete[] _text;
}

//Display the string
void Strings::display() {

	int count{ sizeoftext };
	char* ch;
	ch = _text;

	while (count--)
	{
		std::cout << *ch;
		ch++;
	}
	 
}

int main()
{
	Strings str("Learning C++");
	str.display();
	return 0;
}