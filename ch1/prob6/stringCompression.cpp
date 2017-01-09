/* Cracking the Coding Interview
 * Problem 1.6
 * Elijah Verdoorn
 * 1/9/17
 */

#include <iostream>
#include <string>
using namespace std;

string stringCompression(string str)
{
	string returner;
	for (int i = 0; i < str.length(); i++)
	{
		int pos = i + 1;
		while (str[i] == str[pos])
		{
			pos++;
		}
		returner.push_back(str[i]);
		returner.push_back(to_string(pos - i)[0]);
		i = pos - 1;
	}

	if (str.length() < returner.length())
	{
		// as per spec, return the shorter of the original and "compressed" strings
		return str;
	} else {
		return returner;
	}
}

int main()
{
	string test1 ("aabcccccaaa");
	string test2 ("aabbbbbcccccaaaxtxzzzjk");
	cout << test1 << " --> " << stringCompression(test1) << endl;
	cout << test2 << " --> " << stringCompression(test2) << endl;
}
