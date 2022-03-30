// String Key Sort
// Given Input: 
// 3 // Nubmber of string
// 92 022 // String one
// 82 12  // string two
// 77 13  // String three
// 2  false numaric // The key for ordering, isReverse?, ordering
// Expected Output:
// 82 12
// 77 13
// 92 022

// Time Complexity: O(nlgn)

#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<pair<int, string>> res;
	bool isReverse = true;
	string order = "numerical";
	int col = 2;
	// string order = "Lexographical";

	for (int i = 0; i < n; ++i)
	{
		string s1, s = "";
		cin >> s1;
		string temp;
		std::vector<string> v;

		char s2[5];

		for (int i = 0; i < 5; ++i)
		{
			s2[i] = s1[i];
		}

		for (int i = 0; i < strlen(s2); ++i)
		{
			if(s2[i] == ' '){
				v.push_back(temp);
				temp = "";
			}else{
				temp += s2[i];
			}
		}

		int num = stoi(v[col - 1]);
		res.push_back( make_pair(num,s1));
	}

	sort(res.begin(), res.end());

	if(isReverse and order == "numerical"){
		while(n--){
			cout << res[n].second << endl;
		}
	}else{
		for (int i = 0; i < n; ++i)
		{
			cout << res[i].second << endl;
		}
	}


	return 0;
}