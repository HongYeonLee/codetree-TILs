#include <iostream>
using namespace std;

void swap(int& n, int& m){
    int temp;
    temp = n;
    n = m;
    m = temp; 
}

int main() {
    //입력
    int n, m;
    cin >> n >> m;

    //연산
    swap(n, m); //주소를 보내기

    //출력
    cout << n << " " << m;

    return 0;
}