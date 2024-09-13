#include <iostream>
using namespace std;

string getSeason(int m){
    switch(m){
        case 3 : case 4 : case 5:
        return "Spring";

        case 6 : case 7 : case 8:
        return "Summer";

        case 9 : case 10 : case 11:
        return "Fall";

        case 12 : case 1 : case 2 :
        return "Winter";

        default :
            return "없는 달입니다.";
    }
}

bool isLeapYear(int y){
    if (y%4 != 0 || y%4 == 0 && y%100 == 0 && y%400 != 0){
        return false;
    }
    return true;
}

bool isExist(int y, int m, int d){
    switch (m){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        if (d <= 31){
            return true;
        }
        break;

        case 4 : case 6 : case 9 : case 11 :
        if (d <= 30){
            return true;
        }
        break;

        case 2:
        if (isLeapYear(y)){
            if(d<=29){
                return true;
            }
        }
        else{
            if(d<=28){
                return true;
            }
        }
        break;

        default:
            return false;
    }
}

int main() {
    //입력
    int y, m, d;
    cin >> y >> m >> d;

    //연산 & 출력
    if(isExist(y, m, d)){
        cout << getSeason(m);
    }
    else{
        cout << -1;
    }

    return 0;
}