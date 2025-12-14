//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
int calculateArea(int lenght, int widht=5);
int main() {
	int lenght = 0, widht = 0;
	cout << "Enter the lenght of the rectangle" << endl;
	cin >> lenght;
	cout << "Enter the widht of the rectangle" << endl;
	cin >> widht;
	int result1 = calculateArea(lenght);
	cout << "When only lenght is given as argument then the ar is " << result1 << endl;
	int result2 = calculateArea(lenght, widht);
	cout << "WHen the both lenght and widht are given then the area will be " << result2 << endl;
	return 0;
}
int calculateArea(int lenght, int widht) {
	return lenght * widht;
}