//L1F24BSCS0069- MUHAMMAD ASMAR NAEEM
#include <iostream>
using namespace std;
void swapNumbers(int& a, int& b);
int main() {
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Before swapNumbers: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After swapNumbers (pass-by-reference): a = " << a << ", b = " << b << endl;
    return 0;
}
void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}