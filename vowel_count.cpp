// Program to count the number of vowels in a string

#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            // cout << s[i] << " is a vowel." << endl;
            count++;
        }
    }
    cout << "No. of vowels in the string: " << count << endl;
    
}