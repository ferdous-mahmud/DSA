// String Tokenization
// Given a String
// You have to split this string with respect of some delimeters(s)
// Time Complexity: O(n)

#include<iostream>
#include<cstring>
#include<string>
#include <vector>
using namespace std;

int main(){
	char str[] = "Today is a sunny day";
	vector<string> v;
	string temp = "";

	// strtok()
	// This is a lib function for tokenize char array
	// Example:
	// strtok(str, " "); // First time
	// strtok(NULL, " "); // Next time
	// strtok(NULL, " "); // ,,
	// strtok(NULL, " "); // .....

	for (int i = 0; i < strlen(str); ++i)
	{
		if(str[i] == ' '){
			v.push_back(temp);
			temp = "";
		}else{
			temp += str[i];
		}
	}

	for(string i: v){
		cout << i << endl;
	}


	return 0;
}
