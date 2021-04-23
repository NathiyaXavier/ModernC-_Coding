#include <iostream>
using namespace std;

//To test mutable storage class
class testMutable {

public:

    // defining mutable variablevar1
    // now this can be modified
    mutable int16_t var1{ 10 };
    int16_t var2{ 25 };

    testMutable() {}
};

int main() {

    //Test object declared as a constant
    const testMutable Test;

    Test.var1 = 200;

    // Uncommenting below lines
    // will throw error
    //Test.var2 = 200;

    cout << "var1 : " << Test.var1;
    return 0;
}