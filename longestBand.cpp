// Longest Band
// Given an Array
// You have to find the longest band (subsequence of consecutive number)
// consecutive number example: 1, 2, 3, 4 && 8, 9, 10 (+/- 1)
// Time Complexity: O(n) // unordered_set

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
	vector<int> v = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};

	unordered_set<int> s(v.begin(), v.end());

	int count = 0;
	int res = 0;

	for(int i: v){

		if(s.find(i - 1) == s.end()){
			count = 1;

			while(s.find(i + count) != s.end()){
				count ++;
			}

			if(count > res){
				res = count;
			}
		}
	}

	cout << res << endl;


	return 0;
}