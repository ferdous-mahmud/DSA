// Sorted Subsequence
// Given an string
// You have to print all the subsequence of the string sorted by length
// and lexographic sorted order if length is same
// Time Complexity: O(2 ^ n)
// Space Complexity: O()

#include<iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

void subsequence(string s, string o, vector<string> &v){

	if(s.size() == 0){
		v.push_back(o);
		return;
	}

	char ch = s[0];
	string reduced_input = s.substr(1);
	subsequence(reduced_input, o + ch, v);
	subsequence(reduced_input, o, v);
}

bool compear(string s1, string s2){
	if(s1.length() == s2.length()){
		return s1 < s2;
	}
	return s1.length() < s2.length();
}

int main(){
	string s;
	cin >> s;
	vector<string> v;
	string output = "";

	subsequence(s, output, v);
	sort(v.begin(), v.end(), compear);

	for(auto s : v){
		cout << s << ",";
	}
	return 0;
}