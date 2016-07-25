/*

    String Rotation: Assume you have a method isSubst ring which checks if one word is a substring
    of another. Given two strings, 51 and 52, write code to check if 52 is a rotation of 51 using only one
    call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat").


*/

#include <iostream>
#include <string>

using namespace std;

bool is_Substring (string s1, string s2) {

    return (s1.find(s2) != string::npos);

}

bool String_Rotation(string s1, string s2) {

    if (s1.length() == s2.length() && s1.length() > 0) {
        string s1s1 = s1 + s1;
        return is_Substring(s1s1, s2);
    }
    return false;

}


int main () {


    cout << "testing erbottlewat, waterbottle (1)" << endl << String_Rotation("erbottlewat", "waterbottle") << endl;
    cout << "testing cat,bob (0) " << endl << String_Rotation("cat", "bob") << endl;

}
