import java.util.Scanner;

public class Main {

    static boolean isMagicNum(int n){
        if (n % 2 == 0 && (n/10 + n%10)%5 == 0) //n이 짝수이고 십의 자리와 일의 자리의 합이 5의 배수일 때
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        if (isMagicNum(n))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}