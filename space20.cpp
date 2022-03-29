// Space20
// Given an string
// You have to replace all space with %20
// Time Complexity: O(n)
// Space Complexity: O(1) // without extra memory

#include<iostream>
#include<string>
#include <cstring>
using namespace std;


int main(){
	char s[] = "hello world This is new";
	int count = 0;
	int i = 0;

	while(s[i] != '\0'){
		if(s[i] == ' '){
			count ++;
		}
		i++;
	}

	int idx =  strlen(s) + 2 * count;
	s[idx] = '\0';
	

	for(i = strlen(s) - 1; i >= 0; i--){
		if(s[i] == ' '){
			s[idx - 1] = '0';
			s[idx - 2] = '2';
			s[idx - 3] = '%';
			idx = idx - 3;

		}else{
			s[idx - 1] = s[i];
			idx --;
		}
	}

	cout << s;

	return 0;
}