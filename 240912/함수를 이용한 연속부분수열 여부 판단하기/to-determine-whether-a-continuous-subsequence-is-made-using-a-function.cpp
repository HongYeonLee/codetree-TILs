#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(vector<int>& a, vector<int>& b){
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            if(b[j] == a[i]){
                if(b[j+1] == a[i+1]){
                    return true;
                }
            }
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
    int input;

    for (int i = 0; i < a.size(); i++){
        cin >> input;
        a[i] = input;
    }

    for (int i = 0; i < b.size(); i++){
        cin >> input;
        b[i] = input;
    }

    //연산
    bool ans = isSubsequence(a, b);

    //출력 
    if(ans){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}