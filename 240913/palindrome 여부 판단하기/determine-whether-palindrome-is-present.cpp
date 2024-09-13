#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<char>& a){
    vector<char> reverse;
    for (int i = a.size() - 1; i >= 0; i--){
        reverse.push_back(a[i]);
    }
    for (int i = 0; i < a.size(); i++){
        if(a[i] != reverse[i]){
            return false;
        }
    }
    return true;
}


int main() {
    //입력
    vector<char> a;
    string s;
    cin >> s;
    
    for (char c : s){
        a.push_back(c);
    }

    //연산 & 출력
    if (isPalindrome(a)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}