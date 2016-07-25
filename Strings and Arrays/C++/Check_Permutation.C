/*

1.2
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
*/



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Permutation (string S1, string S2){


if (S1.length()!=S2.length()){
    return false;
}


vector<char> S1_V(S1.begin(),S1.end());
vector<char> S2_V(S2.begin(),S2.end());

sort(S1_V.begin(),S1_V.end());
sort(S2_V.begin(),S2_V.end());

for(int i = 0; i<S1_V.size();i++){
    if(S1_V[i]!=S2_V[i]){
        return false;
    }

}
return true;
}

int main(){

cout << "testing cat, tca (should return 1) \n"<< Permutation("cat","tca")<<endl;
cout << "testing shoe, baby(should return 0)\n" << Permutation("shoe","baby")<<endl;


}
