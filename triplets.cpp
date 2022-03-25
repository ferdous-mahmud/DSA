// Triplets
// Given an array and a number n
// You have to find 3 element of array that can form the sum equals to n
// Time Complexity: O(n ^ 3)

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int sum = 18;

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i + 1; j < v.size(); ++j)
		{
			for (int k = j + 1; k < v.size(); ++k)
			{
				if(v[i] + v[j] + v[k] == sum){
					cout << v[i] << ", " << v[j] << ", " << v[k] << endl;
				}
			}
		}
	}


	return 0;
}