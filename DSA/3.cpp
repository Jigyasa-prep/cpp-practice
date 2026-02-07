/*Print last character of string

Given a string s. Return the last character of the given string s.


Example 1

Input : s = "takeuforward"

Output : d

Explanation : The last character of given string is "d".

Example 2

Input : s = "goodforyou"

Output : u

Explanation : The last character of given string is "u".
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"take input:"<<s;
    getline(cin,s);
    cout<<"last character of given string is: "<<s[s.length()-1];
    return 0;
}