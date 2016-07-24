/*
1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?
*/

package Is_Unique;



public class Is_Unique {
   public static boolean is_unique(String S){
        
  	for(int i=0;i<S.length();i++){
            if(S.indexOf(S.charAt(i))<i){
                return false;
            }
        }    
        return true;
        
        }
    public static void main(String[] args) {
        System.out.println(is_unique("abcd"));
        System.out.println(is_unique("aaa"));
    }
}
