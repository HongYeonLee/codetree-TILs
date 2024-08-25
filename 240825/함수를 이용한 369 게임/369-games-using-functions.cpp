#include <iostream>
using namespace std;

int haveMultiplesOf3(int n){
    int cnt = 0;
    while (n > 0){
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9){
            cnt++;
            break;
        }
        n /= 10;
    }
    return cnt;
}

int isMultiplesOf3(int a, int b){
    int cnt = 0;
    for (int i = a; i <= b; i++){
        if (i % 3 == 0) cnt++;
        else cnt += haveMultiplesOf3(i);
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt;

    //입력
    int a, b;
    cin >> a >> b;

    //연산
    cnt = isMultiplesOf3(a, b);

    //출력
    cout << cnt;

    return 0;
}