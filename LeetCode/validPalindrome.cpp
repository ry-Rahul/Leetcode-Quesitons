#include <bits/stdc++.h>
using namespace std;

void printString(string s){
    for(auto i: s){
        cout << i;
    }
    cout << endl;
}
bool isPalindrome(string s){
    int size = s.size();
    int i = 0;
    int j = size-1;
    while(i<j){
        swap (s[i++],s[j--]);
    }
    printString(s);
    return 1;
}

int main(){
//   Input: s = "A man, a plan, a canal: Panama"
// Output: true

    string s = "A man, a plan, a canal: Panama";
    bool ans = isPalindrome(s);
    cout << ans << endl;

  return 0;
}