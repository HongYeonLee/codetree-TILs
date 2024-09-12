#include <iostream>
#include <vector>
using namespace std;

bool isSame(int n){
    for (int i = 0; i < b.size(); i++){
        if (a[i + n] != b[i]){
            return false;
        }
    }
    return true;
}

bool isSubsequence(vector<int>& a, vector<int>& b){
    for (int i = 0; i <= a.size() - b.size(); i++){
        if(isSame(i)){
            return true;
        }
    }
    return false;
}

int main() {
    //입력
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1);
    vector<int> b(n2);

    for (int i = 0; i < a.size(); i++){
        cin >> a[i];
    }

    for (int i = 0; i < b.size(); i++){
        cin >> b[i];
    }

    //연산 & 출력
    if(IsSubsequence(a, b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}