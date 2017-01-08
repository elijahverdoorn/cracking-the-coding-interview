#include <map>
#include <string>
#include <iostream>
using namespace std;

bool isUnique(string str)
{
	map<char, bool> previousChars;
	for (int i = 0; i <= str.length(); i++)
	{
		if (previousChars.find(str[i]) == previousChars.end())
		{
			previousChars.insert(pair<char, bool>(str[i], true));
		} else {
			return false;
		}
	}
	return true;
}

int main()
{
	string testString1 = "abcdefg";
	string testString2 = "aabbccdd";
	string testString3 = "abcdefghijklmnoua";
	cout << isUnique(testString1) << endl;
	cout << isUnique(testString2) << endl;
	cout << isUnique(testString3) << endl;
}
	
