// Program to reverse a string

#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int len = s.length();	
    char temp;
    for (int i = 0; i < (len/2); i++)
    {
        temp = s[i]; // assign 1st index to temp in 1st itration
        s[i] = s[len-i-1]; // assign last index value to 1st index
        s[len-i-1] = temp; // assign 1st index value to last
    }
    cout << "The reverse of the string is: " << s << endl;
    
}