// 20170427.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main()
{
	vector <int> num;
	vector<int> r;
	int tar=6;
	num.push_back(3);
	num.push_back(2);
	num.push_back(4);
	r = twoSum(num, tar);
	cout << r[0] << ' ' << r[1] << endl;
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {
	int n = nums.size();
	int i, j;
	vector<int> result;
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if ((nums[i] + nums[j]) == target) {
				result.push_back(i);
				result.push_back(j);
				break;
			}
		}
		if (result.size() == 2) break;
	}
	return result;
}
