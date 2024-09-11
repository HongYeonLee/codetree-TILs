#include <iostream>
using namespace std;

int solution(int a, char o, int c){
    int ans;
    switch(o){
        case '+':
        ans = a + c;
        break;

        case '-':
        ans = a - c;
        break;

        case '/':
        ans = a/c;
        break;

        case '*':
        ans = a*c;
        break;

        default :
        ans = -1;
        break;
    }

    return ans;
}

int main() {
    //입력
    int a, c;
    char o;

    cin >> a >> o >> c;

    //연산
    int ans = solution(a, o, c);

    //출력
    if (ans == -1){
        cout << "False";
    }
    else{
        cout << a << " " << o << " " << c << " = " << ans;
    }

    return 0;
}