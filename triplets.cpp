// Triplets
// Given an array and a number n
// You have to find 3 element of array that can form the sum equals to n
// Time Complexity: O(n ^ 2)

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int sum = 18;

	for (int i = 0; i < v.size(); ++i)
	{
		int rem = sum - v[i];
		unordered_set<int> s;

		for (int j = i + 1; j < v.size(); ++j)
		{
			int nowRem = rem - v[j];

			if(s.find(nowRem) != s.end()){
				cout << v[i] << ", " << nowRem << ", " << v[j]  << endl;
			}

			s.insert(v[j]);
		}
	}


	return 0;
}