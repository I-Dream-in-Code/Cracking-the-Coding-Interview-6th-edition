/*
1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
*/

#include <iostream>
#include <unordered_map>

using namespace std;

typedef std::unordered_map<char,int> myMap;

bool unique_char(string S){

    myMap m;

    for(int i=0; i<S.length();i++){
        if(m.count(S[i])==0){
            m[S[i]]=1;
        }
        else{
            m[S[i]]+=1;
        }
    }

    for(auto& i: m){
        if (i.second>1){
            return false;
        }
    }

    return true;
}

int main(){

cout<<"testing abcd (should return 1)\n"<< unique_char("abcd")<<endl;
cout << "testing abcdd (should return 0)\n"<< unique_char("abcdd") <<endl;


}
