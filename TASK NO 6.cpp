//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
int squareValue(int* ptr);
int main() {
	int* ptr = new int;
	cout << "Enter a number" << endl;
	cin >> *ptr;
	int result = squareValue(ptr);
	cout << "The square of the number is " << result<<endl;
	delete ptr;
	//cout << "the memeory after the deletion is " << *ptr << endl;
	ptr = nullptr;
	ptr = new int;
	cout << "Enter a number again " << endl;
	cin >> *ptr;
	cout << "The number is " << *ptr<<endl;
	delete ptr;
	return 0;
}
int squareValue(int* ptr) {
	return (*ptr) * (*ptr);
}