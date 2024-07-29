// Check Palindrome string using C++  i.e. if string = "naman" -> palindrome


#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int left = 0;
    int right = s.length() - 1;
    bool isPalindrome = true;
    
    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    if (isPalindrome) {
        cout << s<<" is a palindrome string." << endl;
    } else {
        cout << s<<" is not a palindrome string." << endl;
    }
    
    return 0;
}
