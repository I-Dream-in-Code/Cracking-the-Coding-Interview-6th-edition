/*
1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
*/

package Is_Unique;



public class Is_Unique {
   public static boolean is_unique(String S){
        
  	if (S.length() > 128) {
			return false;
		}
		boolean[] char_set = new boolean[128];
		for (int i = 0; i < S.length(); i++) {
			int val = S.charAt(i);
			if (char_set[val]) return false;
			char_set[val] = true;
		}
		return true;
    }
    
    public static void main(String[] args) {
        System.out.println(is_unique("abcd"));
        System.out.println(is_unique("aaa"));
    }
}
