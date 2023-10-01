#include <iostream>
using namespace std;

void getarr(int **arr , int r , int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> arr[i][j];
		}
	}
}

void display(int **arr, int r , int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int r, c;
	cin >> r >> c;
	int **arr = new int*[r];
	
	for(int i = 0; i < r; i++){
		arr[i] = new int[c];
	}
	getarr(arr , r , c);
	display(arr , r , c);
	
	// freeing the memory
	for(int i = 0; i < r; i++){
		delete[] arr[i];
	}
	
	delete[] arr[];
	
	
}
