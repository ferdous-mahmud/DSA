// Rains
// Given n non negative integers that representing an elevation map
// where each bar is 1.
// You have to compute how much water it can trap after raining
// Time Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	vector<int> l , r;
	int res = 0;
	int size = height.size() - 1;
	int j = size;
	int left = 0, right = 0;

	for (int i = 0; i <= size; ++i)
	{
		left = max(left,height[i]);
		l.push_back(left);
		right = max(right, height[j]);
		r.push_back(right);
		j --;
	}

	int i = 0;
	j = size;

	for (int m: height)
	{
		res += min(l[i],r[j]) - m;
		i ++;
		j --;
	}
	cout << res << endl;

	return 0;
}