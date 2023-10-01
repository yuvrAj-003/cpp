/* 
input from user and store them in an array. 
Now, copy all the elements in another array but in reverse order.
*/


#include <iostream>
using namespace std;


void display(int *arr , int n){
	for(int i =0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* reverse(int *arr, int n){
	static int *newarr = new int[n];
	int j = 0;
	for(int i = n-1; i >= 0; i--){
		newarr[i] = arr[j];
		j++;
	}
	return newarr;
	
}


int main(){
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	display(arr , n);
	int *reversed_array = reverse(arr , n);
	display(reversed_array , n);
	
	delete[] reversed_array;
	return 0;
		
}
