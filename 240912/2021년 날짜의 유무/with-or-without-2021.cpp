#include <iostream>
using namespace std;

bool isExist(int m, int d){
    switch (m){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        if (d <= 31){
            return true;
        }
        case 4 : case 6 : case 9 : case 11 :
        if (d <= 30){
            return true;
        }
        case 2:
        if (d <= 28){
            return true;
        }
        default:
            return false;
    }
}

int main() {
    //입력
    int m, d;
    cin >> m >> d;

    //연산 & 출력
    if(isExist(m, d)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}