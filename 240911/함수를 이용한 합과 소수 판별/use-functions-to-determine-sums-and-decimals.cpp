#include <iostream>
using namespace std;

bool isEvenSum(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    if (sum%2 == 0){
        return true;
    }
    else{
        return false;
    }

}

bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int solution(int a, int b){
    int cnt = 0;
    for (int i = a; i < b; i++){
        if(isPrime(i) && isEvenSum(i)){
            cnt++;
        }
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