#include<iostream>
#include<string>
using namespace std;
int main()
{
	char string[100];
	int length = 0;
	bool isPalindrome = false;
	cout << "Enter a sentence: ";
	cin >> string;
	length = strlen(string);
	for (int i = 0; i < length; i++)
	{
		if (string[i] = string[length - i - 1])
		{
			isPalindrome = true;
		}
	}
	if (isPalindrome)
	{
		cout << "\nSentence is a Palindrome" << endl;
	}
	if (!isPalindrome)
	{
		cout << "\nSentence is not a Palindrome" << endl;
	}
	return 0;
}