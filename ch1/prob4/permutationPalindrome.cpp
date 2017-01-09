/* Cracking the Coding Interview
 * Problem 1.4
 * Elijah Verdoorn
 * 1/9/17
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool checkPermutation(string str)
{
	map<char, int> chars; 
	for (int i = 0; i < str.length(); i++)
	{
		if (chars.find(str[i]) != chars.end())
		{
			chars[str[i]]++;
		} else {
			chars[str[i]] = 1;
		}
	}

	bool oneCharUsedUp = false;
	for (auto const& x : chars)
	{
		if (x.second % 2 != 0)
		{
			if (oneCharUsedUp)
			{
				return false;
			} else {
				oneCharUsedUp = true;
			}
		}
	}
	return true;
}

int main()
{
	string test1 ("racecar");
	string test2 ("aabbcc");
	string test3 ("abccdd");
	cout << checkPermutation(test1) << endl;
	cout << checkPermutation(test2) << endl;
	cout << checkPermutation(test3) << endl;
}
