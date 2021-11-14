#include<vector>
#include<iostream>
#pragma once

using namespace std;

class Stacks
{private:
	vector< vector<int> > stacks;
	int maxSize;

public:
	Stacks(int maxSize) : maxSize(maxSize) {
	};

	void addElem(int num);

	int delElem();

	void printStack();
};

