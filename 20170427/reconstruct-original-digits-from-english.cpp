//Reconstruct Original Digits from English
//https://leetcode.com/problems/reconstruct-original-digits-from-english/#/description
//Given a non-empty string containing an out-of-order English representation of digits 0-9, output the digits in ascending order.

//#include "stdafx.h"
#include <iostream>
#include "string"
using namespace std;

string originalDigits(string);

int main()
{
	string temp, result;
	cin >> temp;
	result = originalDigits(temp);
	cout << result << endl;
	return 0;
}

string originalDigits(string s)
{
	int n = s.length();
	string r = "";
	int n_letter[10] = { 0,0,0,0,0,0,0,0,0,0 };

	//0-'z'ero 2-t'w'o 4-fo'u'r 6-si'x' 8-ei'g'ht 5-'f'ive+'f'our 7-se'v'en+fi'v'e 9-n'i'ne+s'i'x+e'i'ght+f'i've 1-'o'ne+zer'o'+tw'o'+f'o'ur 3-t'h'ree+eig'h't

	//first scan the whole string and get the number of specific letters
	for (int i = 0; i < n; i++) {
		switch (s[i]) {
		case 'z': n_letter[0]++; break;
		case 'w': n_letter[2]++; break;
		case 'u': n_letter[4]++; break;
		case 'x': n_letter[6]++; break;
		case 'g': n_letter[8]++; break;
		case 'f': n_letter[5]++; break;
		case 'v': n_letter[7]++; break;
		case 'i': n_letter[9]++; break;
		case 'o': n_letter[1]++; break;
		case 'h': n_letter[3]++; break;
		}
	}

	//substrate the useless number 
	n_letter[5] -= n_letter[4];
	n_letter[7] -= n_letter[5];
	n_letter[9] -= n_letter[6] + n_letter[8] + n_letter[5];
	n_letter[1] -= n_letter[0] + n_letter[2] + n_letter[4];
	n_letter[3] -= n_letter[8];

	//generate the final string

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < n_letter[i]; j++) {
			r += '0' + i;
		}
	}

	return r;
}

