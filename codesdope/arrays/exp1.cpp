/*
Take 10 integer inputs from user and store them in an array and print them on screen.
*/

#include <iostream>
using namespace std;


int main(){
	
	int n;
	cin >> n;
	int *arr = new int[n];
	
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	cout << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	
}
