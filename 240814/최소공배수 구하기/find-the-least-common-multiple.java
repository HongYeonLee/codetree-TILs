import java.util.Scanner;
public class Main {

    static void lcm(int a, int b)
    {
        int gcd = 0;
        for (int i = 1; i <= Math.min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }

        System.out.println((a*b)/gcd); 
    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        lcm(a, b);
    }
}