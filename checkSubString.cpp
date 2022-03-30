// Check Substring
// Given two string
// If second string is subsequence of first then print "YES" or "NO"
// Time Complexity: O(n1 ^ n2) // n1 = length of first string
							   // n2 = length of second string

#include <iostream>
#include <string>
using namespace std;


int main(){

	string s1 = "Hello World, This is string manipulation problem";
	string s2 = "isman";
	int size = 0;
	int mainSize = s1.size();

	for (int i = 0; i < s2.size(); ++i)
	{
		if(s1.find(s2[i]) < mainSize){
			size ++;
		}
	}

	if(size == s2.size()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}





	return 0;
}