#include <iostream>
using namespace std;

/*
https://www.codesdope.com/practice/cpp-array/

5
1 2 3 4 5

10 
1 2 3 4 5 6 7 8 9 0
*/
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
