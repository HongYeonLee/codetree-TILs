import java.util.Scanner;

public class Main {

    static int min(int a, int b, int c){
        int min = a;
        
        if (min > b) //b가 a보다 작을 경우
            min = b;
            if (min > c) //c가 b보다 작을 경우
                min = c;
        
        else if (min > c) //c가 a보다 작을 경우
                min = c;
                if (min > b) //b가 c보다 작을경우
                min = b;
        
        return min;
         
    }   

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        System.out.println(min(a, b, c));
    }
}