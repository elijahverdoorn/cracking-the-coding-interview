/* Cracking the Coding Interview
 * Problem 1.3
 * Elijah Verdoorn
 * 1/8/17
 */

#include <iostream>
#include <string>
using namespace std;

string urlify(string str, int len)
{
	char returner[len];
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		cout << counter << endl;
		if (str[i] == ' ')
		{
			returner[counter] = '%';
			counter++;
			returner[counter] = '2';
			counter++;
			returner[counter] = '0';
			counter++;
		} else {
			returner[counter] = str[i];
			counter++;
		}
	}
	return string(returner);

}

int main()
{
	pair<string, int> test1 ("test test", 11);
	pair<string, int> test2 ("elijah verdoorn", 17);
	pair<string, int> test3 ("x y z", 9);
	pair<string, int> test4 ("another test string", 23);

	cout << test1.first << " --> " << urlify(test1.first, test1.second) << endl;
	cout << test2.first << " --> " << urlify(test2.first, test2.second) << endl;
	cout << test3.first << " --> " << urlify(test3.first, test3.second) << endl;
	cout << test4.first << " --> " << urlify(test4.first, test4.second) << endl;
}
