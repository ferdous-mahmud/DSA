// Strings

#include<iostream>
#include<string>
using namespace std;

int main(){

	// String using char array
	char ch[100] = {'H','E','L','L','O'};

	for (int i = 0; i < 5; ++i)
	{
		cout << ch[i];
	}
	cout << endl;

	// Dynamic char : String
	string s = "World";

	cout << s << endl;


	return 0;
}