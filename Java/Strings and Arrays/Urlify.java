/*

URLify: Write a method to replace all spaces in a string with '%20: You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. 
EXAMPLE
Input:
 "Mr John Smith        ",13
Output:
 "Mr%20John%20Smith"

 */
package urlify;

public class Urlify {

    public static String urlify(String S, int N) {
        String result = "";
        for (int i = 0; i < N; i++) {
            if (S.substring(i, i + 1).equals(" ")) {
                result = result + "%20";
            } else {
                result = result + S.charAt(i);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(urlify("Mike harris", 11));
    }

}
