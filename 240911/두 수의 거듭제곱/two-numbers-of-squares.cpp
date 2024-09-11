#include <iostream>
using namespace std;

int getPower(int a, int b){
    int mul = 1;
    for (int i = 0; i < b; i++){
        mul *= a;
    }
    return mul;
}

int main() {
    //입력
    int a, b;
    cin >> a >> b;

    //연산
    int power = getPower(a, b);

    //출력
    cout << power;
    return 0;
}