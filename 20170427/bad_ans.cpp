//Reconstruct Original Digits from English

//Given a non-empty string containing an out-of-order English representation of digits 0-9, output the digits in ascending order.

#include "stdafx.h"
#include <iostream>
#include "string"
using namespace std;

string originalDigits(string);

int main()
{
	string temp,result;
	cin >> temp;
	result = originalDigits(temp);
	cout << result << endl;
    return 0;
}

string originalDigits(string s)
{
	int n = s.length();
	int Flag = 0;
	string r1 = "", r2 = "", r = "";//r1:0-1, r:2-9
	while (Flag != n) {
		//****for "zero"****
		for (int j = 0; j < n; j++) {
			//'z'ero
			if (s[j] == 'z') {
				r1 += '0';
				s[j] = '0';
				Flag++;
				//z'e'ro
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//ze'r'o
				for (int m = 0; m < n; m++) {
					if (s[m] == 'r') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//zer'o'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'o') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}
		//****for "two"****
		for (int j = 0; j < n; j++) {
			//t'w'o
			if (s[j] == 'w') {
				Flag++;
				r2 += '2';
				s[j] = '0';
				//'t'wo
				for (int m = 0; m < n; m++) {
					if (s[m] == 't') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//tw'o'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'o') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
			}
		}
		//****for "four"****
		for (int j = 0; j < n; j++) {
			//fo'u'r
			if (s[j] == 'u') {
				r += '4';
				s[j] = '0';
				Flag++;
				//'f'our
				for (int m = 0; m < n; m++) {
					if (s[m] == 'f') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//f'o'ur
				for (int m = 0; m < n; m++) {
					if (s[m] == 'o') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//fou'r'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'r') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}
		//****for "five"****
		for (int j = 0; j < n; j++) {
			//'f'ive
			if (s[j] == 'f') {
				r += '5';
				s[j] = '0';
				Flag++;
				//f'i've
				for (int m = 0; m < n; m++) {
					if (s[m] == 'i') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//fi'v'e
				for (int m = 0; m < n; m++) {
					if (s[m] == 'v') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//fiv'e'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}
		//****for "six"****
		for (int j = 0; j < n; j++) {
			//si'x'
			if (s[j] == 'x') {
				Flag++;
				r += '6';
				s[j] = '0';
				//'s'ix
				for (int m = 0; m < n; m++) {
					if (s[m] == 's') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//s'i'x
				for (int m = 0; m < n; m++) {
					if (s[m] == 'i') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
			}
		}
		//****for "seven"****
		for (int j = 0; j < n; j++) {
			//se'v'en
			if (s[j] == 'v') {
				r += '7';
				s[j] = '0';
				Flag++;
				//'s'even
				for (int m = 0; m < n; m++) {
					if (s[m] == 's') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//s'e'ven
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//sev'e'n
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//seve'n'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'n') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}
		//****for "eight"****
		for (int j = 0; j < n; j++) {
			//ei'g'ht
			if (s[j] == 'g') {
				r += '8';
				s[j] = '0';
				Flag++;
				//'e'ight
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//e'i'ght
				for (int m = 0; m < n; m++) {
					if (s[m] == 'i') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//eig'h't
				for (int m = 0; m < n; m++) {
					if (s[m] == 'h') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//eigh't'
				for (int m = 0; m < n; m++) {
					if (s[m] == 't') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}
		//****for "nine"****
		for (int j = 0; j < n; j++) {
			//n'i'ne
			if (s[j] == 'i') {
				r += '9';
				s[j] = '0';
				Flag++;
				//'n'ine
				for (int m = 0; m < n; m++) {
					if (s[m] == 'n') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//ni'n'e
				for (int m = 0; m < n; m++) {
					if (s[m] == 'n') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
				//nin'e'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						s[m] = '0';
						Flag++;
						break;
					}
				}
			}
		}

		//one--
		for (int j = 0; j < n; j++) {
			//'o'ne
			if (s[j] == 'o') {
				Flag++;
				r1 += '1';
				s[j] = '0';
				//o'n'e
				for (int m = 0; m < n; m++) {
					if (s[m] == 'n') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//on'e'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
			}
		}
		//--one
		//three-
		for (int j = 0; j < n; j++) {
			//'t'hree
			if (s[j] == 't') {
				Flag++;
				r2 += '3';
				s[j] = '0';
				//t'h'ree
				for (int m = 0; m < n; m++) {
					if (s[m] == 'h') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//th'r'ee
				for (int m = 0; m < n; m++) {
					if (s[m] == 'r') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//thr'e'e
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
				//thre'e'
				for (int m = 0; m < n; m++) {
					if (s[m] == 'e') {
						Flag++;
						s[m] = '0';
						break;
					}
				}
			}
		}
		//-three
	}
	r = r2 + r;
	r = r1 + r;
	return r;
}
