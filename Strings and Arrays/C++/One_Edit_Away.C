/*

    One Away: There are three types of edits that can be performed on strings: insert a character,
    remove a character, or replace a character. Given two strings, write a function to check if they are
    one edit (or zero edits) away.
    EXAMPLE
    pale, pIe   -> true
    pales. pale -> true
    pale.bale   -> true
    pale.bake   -> false


*/



#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool One_Edit_Away(string s1, string s2) {
    if ( abs( int(s1.length()) - int(s2.length()))  > 1 ) {
        return false;
    }


    string smaller = s1.length() < s2.length() ? s1 : s2;
    string bigger =  s1.length() < s2.length() ? s2 : s1;

    bool mismatchFlag = false;
    int i = 0, j = 0;
    while ( i < smaller.length() && j < bigger.length() ) {
        if ( smaller[i] != bigger[j] ) {
            if (mismatchFlag) {
                return false;
            }
            mismatchFlag = true;
            if ( bigger.length() == smaller.length() ) {
                ++i;
            }
        }
        else {
            ++i;
        }
        ++j;
    }
    return true;
}

int main() {


    cout << "testing pale,ple (1)" << endl << One_Edit_Away("pale", "ple") << endl;
    cout << "testing pales, pale (1)" << endl << One_Edit_Away("pales", "pale") << endl;
    cout << "testing pale, bake (0)" << endl << One_Edit_Away("pale", "bake") << endl;


}
