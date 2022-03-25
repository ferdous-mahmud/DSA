// Triplets
// Given an array and a number n
// You have to find 3 element of array that can form the sum equals to n
// Time Complexity: O(n ^ 2) 
// Less memory use(Without any data structure)

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int sum = 18;

	for (int i = 0; i < v.size() - 3; ++i)
	{
		int first = i + 1;
		int last = v.size() - 1;
		int rem = sum - v[i];

		while(first < last){

			int s = v[first] + v[last];

			if(s == rem){
				cout << v[i] << ", " << v[first] << ", " << v[last] << endl;
				first ++;
				last --;
			}else if(s > rem){
				last --;
			}else{
				first ++;
			}

		}
	}

	return 0;
}