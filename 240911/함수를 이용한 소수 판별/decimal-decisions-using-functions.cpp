#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++){
        if (n%i == 0 || n == 1){
            return false;
        }
    }
    return true;
}

int addPrime(int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++){
        if (isPrime(i)){
            sum += i;
        }
    }
    return sum;
}

int main() {
    //입력
    int a, b;
    cin >> a >> b;

    //연산
    int sum = addPrime(a, b);

    //출력
    cout << sum;
    return 0;
}