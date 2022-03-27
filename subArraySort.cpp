// Subarray Sort
// Given an array size at-least two
// You have to find the smallest subarray
// that need to be sorted in place so the intire input array become sorted
// Time Complexity: O(nlgn)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> nums = {1, 2, 3, 4};
	int left = 0;
	int right = nums.size() - 1;

	vector<int> backup = nums;
	sort(nums.begin(), nums.end());

	while(nums.size() > left and nums[left] == backup[left]){
		left ++;
	}

	while(right >= 0 and nums[right] == backup[right]){
		right --;
	}


	if(left == nums.size()){
		cout << 0;
	}else{
		cout << right - left + 1 << endl;
	}



	return 0;
}
