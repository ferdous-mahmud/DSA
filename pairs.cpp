// Pairs
// Given an array and a number n
// You have to find out the pairs that form the sum of number n
// Time Complexity: O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v = {10, 5, 2, 3, -6, 9, 11};
	int num = 21;

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i + 1; j < v.size(); ++j)
		{
			if(v[i] + v[j] == num){
				cout << v[i] << ", " << v[j] << endl;
			}
		}
	}


	return 0;
}