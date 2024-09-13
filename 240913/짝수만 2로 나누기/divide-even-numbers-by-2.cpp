#include <iostream>
#include <vector>

using namespace std;

bool isEven(int n){
    return n%2 == 0;
}

void divideByTwo(vector<int>& v){
    for (int i = 0; i < v.size(); i++){
        if(isEven(v[i])){
            v[i] /= 2;
        }
    }
}

int main() {
    //입력
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    //연산
    divideByTwo(v);

    //출력
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}