/*

Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just  character at  index in the string, and the remaining characters will occur the same number of times. Given a string , determine if it is valid. If so, return YES, otherwise return NO.

For example, if , it is a valid string because frequencies are . So is  because we can remove one  and have  of each character in the remaining string. If  however, the string is not valid as we can only remove  occurrence of . That would leave character frequencies of .

Function Description

Complete the isValid function in the editor below. It should return either the string YES or the string NO.

isValid has the following parameter(s):

s: a string
Input Format

A single string .

Constraints

Each character
Output Format

Print YES if string  is valid, otherwise, print NO.

Sample Input 0

aabbcd
Sample Output 0

NO
Explanation 0

Given , we would need to remove two characters, both c and d  aabb or a and b  abcd, to make it valid. We are limited to removing only one character, so  is invalid.

Sample Input 1

aabbccddeefghi
Sample Output 1

NO
Explanation 1

Frequency counts for the letters are as follows:

{'a': 2, 'b': 2, 'c': 2, 'd': 2, 'e': 2, 'f': 1, 'g': 1, 'h': 1, 'i': 1}

There are two ways to make the valid string:

Remove  characters with a frequency of : .
Remove  characters of frequency : .
Neither of these is an option.

Sample Input 2

abcdefghhgfedecba
Sample Output 2

YES
Explanation 2

All characters occur twice except for e which occurs 3 times. We can delete one instance of  to have a valid string.

link: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D=strings&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

	map<char, int> freq;
	for (int i = 0; i < s.length(); i++) {
		freq[s[i]]++;
	}
	bool flag = false;
	int check = 0;
	auto it = freq.begin();
	check = it->second;
	advance(it, 1);
	while (it != freq.end()) {
		if (it->second != check)
			if (it->second == 1 && check != 1 && flag == false)
				flag = true;
			else if (((it->second == (check - 1)) || (it->second == (check + 1))) && (flag == false))
				flag = true;
			else
			{
				return "NO";
			}
		it++;
	}

	return "YES";

/*

map<char, int> freq;
for (int i = 0; i < s.length(); i++) {
freq[s[i]]++;
}
bool flag = false;
int check = 0;
auto it = freq.begin();
check = it->second;
advance(it, 1);
while (it != freq.end()) {
if (it->second != check)
if (((it->second == (check - 1)) || (it->second == (check + 1))) && (flag == false))
flag = true;
else
{
return "NO";
}
it++;
}

return "YES";

*/

}

int main()
{
	string s = "aaabbbcccf";
	string result = isValid(s);

	cout << result << "\n";
	getchar();
	return 0;
}
