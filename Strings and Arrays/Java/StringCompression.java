/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package string.compression;

/**
 *
 * @author mike
 */
public class StringCompression {

 public static String string_compression(String S){
     int count = 1;
     String result="";
     for(int i=0;i<S.length();i++){
         
         if (i + 1 >= S.length() || S.charAt(i) != S.charAt(i + 1)){
         
             result = result +S.charAt(i) +Integer.toString(count);
             count =1;
         }
         count++;
     }
     if (result.length()==S.length()){
         return S;
     }
     else{
         return result;
     }
 }
    public static void main(String[] args) {
        System.out.println(string_compression("aaabccccddd"));
        System.out.println(string_compression("aabbccdd"));
    }
    
}
