// Pairs
// Given an array and a number n
// You have to find out the pairs that form the sum of number n
// Time Complexity: O(nLog N)
#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v = {10, 5, 2, 3, -6, 9, 11};
	int num = 21;

	int start = 0;
	int end = v.size() - 1;

	while(start != end){

		if(v[start] + v[end] == num){
			cout << v[start] << ", " << v[end] << endl;
		}

		start ++;
		end --;
	}


	return 0;
}