// Longest Band
// Given an Array
// You have to find the longest band (subsequence of consecutive number)
// consecutive number example: 1, 2, 3, 4 && 8, 9, 10 (+/- 1)
// Time Complexity: O(nlgn) // because of sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};

	sort(v.begin(), v.end());

	int count = 0;
	bool isAdded = true;
	int res = 0;

	for (int i = 1; i < v.size();)
	{
		if(v[i] - v[i - 1] == 1){
			if(isAdded){
				count ++;
				isAdded = false;
			}
			count ++;
			i++;
		}else{
			count = 0;
			i ++;
		}

		if(count > res){
			res = count;
		}
	}

	cout << res << endl;


	return 0;
}