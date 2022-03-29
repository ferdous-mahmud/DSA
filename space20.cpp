// Space20
// Given an string
// You have to replace all space with %20
// Time Complexity: O(n)
// Space Complexity: O(n) // Using extra memory to store result stringn

#include<iostream>
#include<string>
using namespace std;


int main(){
	string s = "hello world, how are you?";
	string res = "";

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] == ' '){
			res += "%20";
		}else{
			res += s[i];
		}
	}

	cout << res << endl;

	return 0;
}