// Strings
// Find a particular string in a paragraph
#include<iostream>
#include<string>
using namespace std;

int main(){

	string s = "This is an example, and this example show that, about the example";
	string toFind = "example";

	int count = 0;
	int index = s.find(toFind);

	while(index != -1){
		count ++;
		index = s.find(toFind, index + count);
	}

	cout << count << endl;

	return 0;
}