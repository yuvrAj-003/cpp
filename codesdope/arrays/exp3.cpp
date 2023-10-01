/*
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.
*/

#include <iostream>
using namespace std;


int main(){
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	
	int pos = 0;
	int neg = 0;
	int odd = 0;
	int even = 0;
	int zero = 0;
	
	for(int i=0;i<n;i++){
		// check pos, neg, zero
		if(arr[i] > 0){
			pos++;
		}
		else if(arr[i] < 0){
			neg++;
		}
		else{
			zero++;
		}
		
		// check even, odd
		if(arr[i] % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
		
		
	}
	
	cout << "number of positive: " << pos << endl;
	cout << "number of negative: " << neg << endl;
	cout << "number of even: " << even << endl;
	cout << "number of odd: " << odd << endl;
	cout << "number of zero: " << zero << endl;
}
