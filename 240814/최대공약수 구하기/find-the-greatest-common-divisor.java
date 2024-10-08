import java.util.Scanner;
public class Main {

    static int gcd(int a, int b)
    {
        if (a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        if (a%b == 0) return b;
        else return gcd(b, a%b);

    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(gcd(a, b));

    }
}