//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
int calculateSum(int arr[], int size);
double calculateAverage(int arr[], int size);
int main() {
	int N = 0;
	cout << "Enter the size of the array you want to create" << endl;
	cin >> N;
	int* p = new int[N];
	cout << "Enter the " << N << " number of elements in the array" << endl;
	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}
	cout << "the elements in the array are" << endl;
	for (int i = 0; i < N; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
	int sum = calculateSum(p, N);
	cout << "The sum of all the number in the array are " << sum << endl;
	double avg = calculateAverage(p, N);
	cout << "The avg of the numbers inside the array is " << avg << endl;
	delete[] p;
	return 0;
}
int calculateSum(int arr[], int size) {
	int sumt = 0;
	for (int i = 0; i < size; i++) {
		sumt += arr[i];
	}
	return sumt;
}
double calculateAverage(int arr[], int size) {
	double sumt = 0;
	for (int i = 0; i < size; i++) {
		sumt += arr[i];
	}
	double avgr = 0;
	avgr = sumt / size;
	return avgr;
}