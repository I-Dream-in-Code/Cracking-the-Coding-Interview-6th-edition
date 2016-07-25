/*
    1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
    cannot use additional data structures?
*/

#include <iostream>
#include <string>
using namespace std;



bool unique_char(string S) {



    for (int i = 0; i < S.length(); i++) {
        if(S.find(S[i]) < i)
        { return false; }
    }
    return true;
}

int main() {

    cout << "testing abcd (should return 1)\n" << unique_char("abcd") << endl;
    cout << "testing abcdd (should return 0)\n" << unique_char("abcdd") << endl;


}
