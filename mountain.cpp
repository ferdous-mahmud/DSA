// Mountain
// Given an array of distinct integers 
// You have to return the lenght of highest mountain
// Time Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
	int highest = 0;
	int size = arr.size() - 1;

	for (int i = 1; i < size;)
	{
		if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1]){
			int count = 1;
			int j = i;

			while(j > 0 and arr[j] > arr[j - 1]){
				j --;
				count ++;
			}

			while(i < size and arr[i] > arr[i + 1]){
				i ++;
				count ++;
			}

			if(count > highest){
				highest = count;
			}

		}else{
			i++;
		}
	}

	cout << highest << endl;

	return 0;
}
