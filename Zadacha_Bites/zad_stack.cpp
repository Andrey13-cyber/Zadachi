#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a;
	vector< vector<int>> stacks;
	stacks.push_back(vector<int>(a));

	for (int i = 0; i < stacks.size(); i++) {
		cout << stacks[i];
	}
	cout << endl;

	stacks.pop_back();
	for (int i = 0; i < stacks.size(); i++) {
		cout << stacks[i];
	}

}
	



