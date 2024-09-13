import java.util.Scanner;

public class Main {

    public static boolean isPalindrome(String a){
        for (int i = 0; i < a.length(); i++){
            if(a.charAt(i) != a.charAt(a.length() - i - 1)){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        //입력
        String a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLine();

        if(isPalindrome(a)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}