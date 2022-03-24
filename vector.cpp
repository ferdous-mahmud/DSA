// Vector = Dynamic Array
// Time Complexity = O(1)
#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v;

	// Add element on vector
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	// Remove last element of vector
	v.pop_back();

	// Fill Constructor
	// Create a vector that have 10 elements value 1
	// {1, 1, 1,.......n}
	vector<int> v2(10, 1);

	// Remove exact location value
	v.erase(v.begin());

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}

	return 0;
}