/* Cracking the Coding Interview
 * Problem 1.2
 * Elijah Verdoorn
 * 1/7/17
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool checkPermutation(string str1, string str2)
{
	// if the strings are not the same length, they cannot be permutations
	if (str1.length() != str2.length())
	{
		return false;
	}

	map<char, int> str1Chars, str2Chars;
	for (int i = 0; i <= str1.length(); i++)
	{
		if (str1Chars.find(str1[i]) == str1Chars.end())
		{
			// this character has not been seen before
			str1Chars[str1[i]] = 1;
		} else {
			// we have seen this character before, increment the count
			str1Chars[str1[i]] = str1Chars[str1[i]]++;
		}
	}
	for (int i = 0; i <= str2.length(); i++)
	{
		if (str2Chars.find(str2[i]) == str2Chars.end())
		{
			// this character has not been seen before
			str2Chars[str2[i]] = 1;
		} else {
			// we have seen this character before, increment the count
			str2Chars[str2[i]] = str2Chars[str2[i]]++;
		}
	}

	return (str1Chars == str2Chars);	
}

int main()
{
	pair<string, string> testPair1 ("abc", "abc");
	pair<string, string> testPair2 ("abc", "cba");
	pair<string, string> testPair3 ("abc", "xyz");
	pair<string, string> testPair4 ("abc", "gjgjgj");
	pair<string, string> testPair5 ("abc", "ccaa");
	cout << checkPermutation(testPair1.first, testPair1.second) << endl;
	cout << checkPermutation(testPair2.first, testPair2.second) << endl;
	cout << checkPermutation(testPair3.first, testPair3.second) << endl;
	cout << checkPermutation(testPair4.first, testPair4.second) << endl;
	cout << checkPermutation(testPair5.first, testPair5.second) << endl;
}
