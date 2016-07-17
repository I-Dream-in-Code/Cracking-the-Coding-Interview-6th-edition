/*


String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).

*/



#include <iostream>
#include <string>

using namespace std;

string String_Compression(string S){
int count=1;
string result="";
for(int i=0; i< S.length();i++){
    if (S[i]==S[i+1]){
        count+=1;
    }
    else{
        result=result + S[i] + to_string(count);
        count = 1;
    }

    }
if (result.length()==S.length()){
    return S;
}
else{
    return result;
}
}


int main (){

cout << "testing aaabccccddd (a3b1c4d3)" << endl << String_Compression("aaabccccddd")<<endl;
cout << "testing aabbccdd (aabbccdd)" << endl << String_Compression("aabbccdd") <<endl;
}
