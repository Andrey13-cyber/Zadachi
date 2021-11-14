#include "Stacks.h"

void Stacks::addElem(int num) {
	if (stacks.empty() || stacks.back().size() == maxSize)
		stacks.push_back(vector<int>());
	stacks.back().push_back(num);
}

int Stacks::delElem() {
	string err = "Nothing to pop";
	if (stacks.empty())
		throw err;
	int temp = stacks.back().back();
	stacks.back().pop_back();
	if (stacks.back().size() == 0)
		stacks.pop_back();
	return temp;
}

void Stacks::printStack() {
	cout << "Max size of stack: " << maxSize << endl;
	if (stacks.size() == 0)
		cout << "No elements" << endl;
	for (int i = 0; i < stacks.size(); i++) {
		cout << "Information about stack #" << i + 1 << ":";
		for (int j = 0; j < stacks[i].size(); j++)
			cout << stacks[i][j] << " ";
		cout << endl;
	}
}