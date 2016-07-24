/*
1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
*/

#include <iostream>
#include <vector>
using namespace std;

typedef std::unordered_map<char,int> myMap;

bool unique_char(string S){

   	{
		if (str.length() > 128)
		{
			return false;
		}
		vector<bool> char_set(128);
		for (int i = 0; i < str.length(); i++)
		{
			int val = str[i];
			if (char_set[val])
			{
				return false;
			}
			char_set[val] = true;
		}
		return true;
	}

int main(){

cout<<"testing abcd (should return 1)\n"<< unique_char("abcd")<<endl;
cout << "testing abcdd (should return 0)\n"<< unique_char("abcdd") <<endl;


}
