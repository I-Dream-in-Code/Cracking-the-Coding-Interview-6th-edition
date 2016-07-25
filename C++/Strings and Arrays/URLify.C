/*
 
 1.3  URLify: Write a method to replace all spaces in a string with '%20: You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. 
EXAMPLE
Input:
 "Mr John Smith          ", 13
Output:
 "Mr%20John%20Smith"

 * */


#include <iostream>
#include <string>

using namespace std;

string URL(string S, int n){
//
//string newS =S.replace(S.find(" "), string(" ").size(), "%20");
//
//return newS;

string result = "";

for(auto i: S){
    if(i==' '){
        result = result +"%20";
    }
    else{
        result = result + i;
    }
}
return result;
}

int main(){

cout<< "testing mike harris \n" << URL("mike harris",11)<<endl;
}
