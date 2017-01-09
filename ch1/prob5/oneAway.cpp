/* Cracking the Coding Interview
 * Problem 1.5
 * Elijah Verdoorn
 * 1/9/17
 */

#include <string>
#include <iostream>
#include <map>
using namespace std;

bool oneAwayInsert(string str1, string str2)
{
	int j = 0;
	for (int i = 0; i < str2.length(); i++) // use length of str2 so that we don't hit seg fault, since str2 is shorter than str1
	{
		if (str1[j] != str2[i])
		{
			if (j - i > 1)
			{
				return false;
			} else {
				j++;
			}
		}
		j++;
	}
	return true;
}

bool oneAwayReplace(string str1, string str2)
{
	bool oneAwayUsed = false;
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] != str2[i])
		{
			if (oneAwayUsed)
			{
				return false;
			} else {
				oneAwayUsed = true;
			}
		}
	}
	return true;
}


bool oneAway(string str1, string str2)
{
	if (str1.length() < str2.length())
	{
		// swap the strings so that the longer is always the first one
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}

	switch(str1.length() - str2.length())
	{
		case 1:
			return oneAwayInsert(str1, str2);
			break;
		case 0:
			return oneAwayReplace(str1, str2);
			break;
		default:
			// if the lengths differ by more than 1, they cannot be one away, so break out and return false
			return false;
			break;
	}
	return false;
}

int main()
{
	pair<string, string> test1 ("pale", "ple");
	pair<string, string> test2 ("pales", "pale");
	pair<string, string> test3 ("pale", "bale");
	pair<string, string> test4 ("pale", "bake");
	pair<string, string> test5 ("pale", "test");
	pair<string, string> test6 ("pale", "elijah");


	cout << oneAway(test1.first, test1.second) << endl;
	cout << oneAway(test2.first, test2.second) << endl;
	cout << oneAway(test3.first, test3.second) << endl;
	cout << oneAway(test4.first, test4.second) << endl;
	cout << oneAway(test5.first, test5.second) << endl;
	cout << oneAway(test6.first, test6.second) << endl;
}
	
