#include <iostream>
using namespace std;

bool isLeapYear(int y){
    if (y%100 == 0 && y%400 != 0){
        return false;
    }
    if (y%4 == 0){
        return true;
    }
}

int main() {
    //입력
    int y;
    cin >> y;

    //연산
    bool is_leap_year = isLeapYear(y);

    //출력
    if (is_leap_year){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}