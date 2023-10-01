// Write a program to find the sum and product of all elements of an array.

#include <iostream>
using namespace std;

void getarr(int *arr , int n){
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	getarr(arr , n);
	
	int prod = 1;
	int sum= 0;
	
	for(int i = 0; i < n; i++){
		sum += arr[i];
		prod *= arr[i];
	}
	
	cout << "Sum of array: " << sum << endl;
	cout << "Product of array: " << prod << endl;
	
}
