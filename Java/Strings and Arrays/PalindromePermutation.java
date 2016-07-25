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
package palindrome.permutation;

import java.util.HashMap;

/**
 *
 * @author mike
 */
public class PalindromePermutation {

    public static boolean palindrome_Permutation(String S) {
        HashMap<Character, Integer> myMap = new HashMap<Character, Integer>();
        for (int i = 0; i < S.length(); i++) {
            if (!myMap.containsKey(S.charAt(i))) {
                myMap.put(S.charAt(i), 1);
            } else {
                myMap.put(S.charAt(i), myMap.get(S.charAt(i)) + 1);
            }
        }
        boolean oddFlag = false;
        for (Integer i : myMap.values()) {
            if (i % 2 == 1) {
                if (oddFlag) {
                    return false;
                }
                oddFlag = true;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println(palindrome_Permutation("civic"));
        System.out.println(palindrome_Permutation("civil"));

    }

}
