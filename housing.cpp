// Housing - Sliding window problem
// Two pointer
// Given an array represent the plot beside the road, and you need 
// k unit of space in sequence to make a house.
// You have to find all the plots
// example: 
// 	p = [1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2]
// 	k = 8
// output: 2 5
// 		4 6
// 		5 9
// Time complexity: O(n) // reduced form n^2

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
	int k = 8;
	int n = sizeof(arr)/sizeof(int);

	int i = 0;
	int j = 0;
	int cs = 0;

	while(j < n){

		// Expanding to right
		cs += arr[j];
		j ++;

		// Remove element form the left till cs > k and i < j
		while(cs > k and i < j){
			cs = cs - arr[i];
			i ++;
		}

		// If find sum? print first and last index
		if(cs == k){
			cout << i << " " << j - 1 << endl;
		}
	}


	return 0;
}