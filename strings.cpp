// Strings
// Find a particular string in a paragraph
#include<iostream>
#include<string>
using namespace std;

int main(){

	string s = "This is a practice paragraph for testing string.find() function";
	string toFind = "testing";

	int index = s.find(toFind);

	if(index != -1){
		cout << "Index find at: " << index << endl;
	}else{
		cout << "Not found!";
	}


	return 0;
}