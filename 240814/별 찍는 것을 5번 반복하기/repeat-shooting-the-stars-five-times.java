public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        for (int i = 0; i <5; i++)
        {
            Print10Star();
        }
    }

    static void Print10Star()
    {
        for (int i = 0; i < 10; i++)
            System.out.print("*");
        System.out.println();
    }
}