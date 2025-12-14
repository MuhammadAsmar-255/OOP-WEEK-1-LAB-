//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include <iostream>
using namespace std;
void swapNumbers(int& a, int& b) {  // Pass the variable values by refernece methode so that the swap would happen
    int temp = a;
    a = b;
    b = temp;
}
void swapNumbersRef(int& x, int& y) {  // we have to pass both the arguments by refernce so that swapping can happen
    int t = x;
    x = y;
    y = t;
}
int calculateArea(int length, int width = 1) {  // we have to give the widht default value of one so that the output shold not always be be 0
    return length * width;
}
int main() {
    int a = 5, b = 10;
    swapNumbers(a, b);
    cout << "After swapNumbers: a=" << a << ", b=" << b << endl;
    swapNumbersRef(a, b);
    cout << "After swapNumbersRef: a=" << a << ", b=" << b << endl;
    cout << "Area with default width: " << calculateArea(6) << endl;
    int* p = new int;
    *p = 7;
    delete p;
    p = new int;//pointer is assigned to some value so stopped the dangling
    *p = 9;
    cout << "Reassigned pointer value: " << *p << endl;
    delete p;  // deleteing the dynamic meemory so that the program would run fine
    return 0;
}
