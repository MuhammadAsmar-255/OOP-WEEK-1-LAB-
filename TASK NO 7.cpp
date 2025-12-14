//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
int squareValue(int* ptr);
int main() {
    int* ptr = new int;
    cout << "Enter a number: ";
    cin >> *ptr;
    int result = squareValue(ptr);
    cout << "The square of the number is " << result << endl;
    ptr = new int;//as we now have given the ptr a new memory location so now it will do a memory leak and the last data will be lost and now cannot be delted
    /*
        Memory Leak Explanation:
        in this point we have lost the acces to the data but it is syill in the memory but we connot access it because now tha pointer is pointing to something else.
    */
    ptr = nullptr;
    ptr = new int;
    cout << "Enter another number: ";
    cin >> *ptr;
    cout << "The new number is: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
int squareValue(int* ptr) {
    return (*ptr) * (*ptr);
}