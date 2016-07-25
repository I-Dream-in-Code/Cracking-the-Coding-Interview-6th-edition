/*

    1.4 Palindrome Permutation: Given a string, write a function to check if it is a permutation of a
    palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation
    is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
    EXAMPLE
    Input:
    Tact Coa
    Output:
    True (permutations: "taco cat". "atco cta". etc.)
*/



#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
bool PalindromePermutation(string S) {

    unordered_map<char, int> myMap;

    for(auto i : S) {
        if(myMap.count(i) == 0) {
            myMap[i] = 1;
        }
        else {
            myMap[i] += 1;
        }
    }

    bool oddflag = false;
    for(auto i : myMap) {
        if(i.second % 2 == 1) {
            if(oddflag) {
                return false;
            }
            oddflag = true;
        }
    }
    return true;
}


int main() {

    cout << "testing civic (1)" << endl << PalindromePermutation("civic")  << endl;
    cout << "testing cciiv (1)" << endl << PalindromePermutation("cciiv") << endl;
    cout << "testing civil (0)" << endl  << PalindromePermutation("civil") << endl;

}
