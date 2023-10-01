/* 
Take 10 integer inputs from user and store them in an array. Again ask user to give a number.
Now, tell user whether that number is present in array or not.
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
	
	int pos = -1;
	int start = 0;
	int end = n-1;
	int target;
	cin>>target;
	
	for(int i = 0; i < n; i++){
		int mid = start + (end - start)/ 2;
		if(arr[mid] == target){
			pos = mid;
		}
		else if(mid < target){
			start = start + 1;
		}
		else{
			end = end - 1;
		}
	}
	
	if(pos != -1){
		cout << "The element is present at " << pos << end;
	}
	else{
		cout << "The element is not present" << endl;
	}
}
