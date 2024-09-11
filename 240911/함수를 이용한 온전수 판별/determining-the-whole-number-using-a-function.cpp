#include <iostream>
using namespace std;

int solution(int a, int b){
    int cnt = 0;
    for (int i = a; i <= b; i++){
        if (i%2 == 0){
            continue;
        }
        if (i%10 == 5){
            continue;
        }
        if(i%3 == 0 && i%9 != 0){
            continue;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    //입력
    int a, b;
    cin >> a >> b;

    //연산
    int cnt = solution(a, b);

    //출력
    cout << cnt;
    
    return 0;
}