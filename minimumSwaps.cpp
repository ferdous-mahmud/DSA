// Minimum Swaps
// Given an array size n
// Find the munimum number of swap needed to make array sorted
// Time Complexity: O()
// Space Complexity: O(n)

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v = {2, 4, 5, 1, 3};
	int n = v.size();
	pair<int, int> p[n];
	int res = 0;

	for (int i = 0; i < n; ++i)
	{
		p[i].first = v[i];
		p[i].second = i;
	}

	sort(p, p + n);
	vector<bool> visited(n, false);

	for (int i = 0; i < n; ++i)
	{
		// If element is visited and already in right position
		int oldPosition = p[i].second;
		if(visited[i] or oldPosition == i){
			continue;
		}

		// Visiting element for first time
		int cycle = 0;
		int node = i;
		while(visited[node] == false){
			visited[node] = true;
			node = p[node].second;
			cycle ++;
		}

		res += (cycle - 1);
	}

	cout << res << endl;

	return 0;
}