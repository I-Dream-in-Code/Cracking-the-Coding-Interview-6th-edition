/*

Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.

 */
package check_permutation;

import java.lang.reflect.Array;
import java.util.Arrays;

/**
 *
 * @author mike
 */
public class Check_Permutation {

    public static boolean check_permutation(String S1, String S2) {
        if (S1.length() != S2.length()) {
            return false;
        }
        String[] s1_A = S1.split("");
        String[] s2_A = S2.split("");

        Arrays.sort(s1_A);
        Arrays.sort(s2_A);

        return Arrays.equals(s2_A, s1_A);
    }

    public static void main(String[] args) {
        System.out.println(check_permutation("abc", "cba"));
        System.out.println(check_permutation("asc", "cba"));
    }

}
