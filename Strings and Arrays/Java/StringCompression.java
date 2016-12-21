/*

String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).

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
