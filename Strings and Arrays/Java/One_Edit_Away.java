/*

One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.
EXAMPLE
pale, pIe   -> true
pales. pale -> true
pale.bale   -> true
pale.bake   -> false

 */


/**
 *
 * @author mike
 */
public class One_Edit_Away {

    public static boolean one_edit_away(String S1, String S2) {
        if (Math.abs((S1.length() - S2.length())) > 1) {
            return false;
        }

        String smaller = S1.length() < S2.length() ? S1 : S2;
        String bigger = S1.length() < S2.length() ? S2 : S1;

        boolean mismatchFlag = false;
        int i = 0, j = 0;
        while (i < smaller.length() && j < bigger.length()) {
            if (smaller.charAt(i) != bigger.charAt(j)) {
                if (mismatchFlag) {
                    return false;
                }
                mismatchFlag = true;
                if (bigger.length() == smaller.length()) {
                    ++i;
                }
            } else {
                ++i;
            }
            ++j;
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println(one_edit_away("pale", "ple"));
        System.out.println(one_edit_away("pales", "pale"));
        System.out.println(one_edit_away("pale", "bake"));

    }

}
