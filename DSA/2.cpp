/*Given two integers X and N, print the value X on the screen N times.

Separate each number by a single space.
Do not add a space after the last number.
After printing all N numbers, move to the next line.
If N = 0, still move to the next line (print an empty line).

Example 1

Input: X = 7, N = 5

Output: 7 7 7 7 7

Example 2

Input: X = 15, N = 1

Output: 15
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int n;
    cout<<"enter value of x";
    cin>>x;
    cout<<"no of times to print"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
      cout<<x<<" ";    
    }
    return 0;
}
