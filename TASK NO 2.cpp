//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
void swap(int num1, int num2);
int main() {
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;
	cout << "Value of first input is " << num1 << " and the value of second input is " << num2 <<" before swapping"<<endl;
	swap(num1, num2);
	cout << "after the swap the value of first input is " << num1 << " and the value of the second input is " << num2 << endl;
	return 0;
}
void swap(int num1, int num2) {
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
}