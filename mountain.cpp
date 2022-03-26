// Mountain
// Given an array of distinct integers 
// You have to return the lenght of highest mountain
// Time Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v = {2, 4, 2};
	bool isIncreasing = false;
	int highest = 0;
	int size = v.size();

	for (int i = 1; i < size; ++i)
	{
		
		if(v[i] > v[i - 1]){
			isIncreasing = true;
		}

		if(isIncreasing){
			if(v[i - 1] > v[i]){
				isIncreasing = false;

				int forword = 0;
				int backword = 0;
				int pick = i - 1;
				int m = pick;
				int n = pick - 1;

				while(v[m] > v[n]){
					backword ++;
					m --;
					n --;
					if(n == -1){
                        break;
                    }
				}

				m = pick;
				n = pick + 1;

				while(v[m] > v[n]){
					forword ++;
					m ++;
					n ++;
					if(n == size){
                        break;
                    }
				}

				if(forword + backword + 1 > highest){
					highest = forword + backword + 1;
				}
			}
		}
	}

	cout << highest << endl;


	return 0;
}