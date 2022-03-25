// Pairs
// Given an array and a number n
// You have to find out the pairs that form the sum of number n
// Time Complexity: O(n)
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){

	vector<int> v = {10, 5, 2, 3, -6, 9, 11};
	int num = 21;

	unordered_set<int> s;

	for (int i = 0; i < v.size(); ++i)
	{
		int rem = num - v[i];

		if(s.find(rem) != s.end()){
			cout << rem << "," << v[i] << endl;
			break;
		}

		s.insert(v[i]);
	}

	return 0;
}