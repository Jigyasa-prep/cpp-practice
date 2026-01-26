//square patterns using loop
#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){//for rows
    for(int i=0;i<n;i++){//for columns
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//Right angled triangle pattern
//no of * increase one by one in line by line row i contain i+1 *
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//Right angled triangle pattern of numbers
//each row contain numbers starting from 1 to row number
//outer loop 1 to n
//inner loop 1 to i print j
void pattern3(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//Right angled triangle pattern of numbers
//each row contain numbers starting from 1 to row number
//outer loop 1 to n
//inner loop 1 to i print i
void pattern4(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
//inverted right angled triangle of *
//outer loop 0 to n
//inner loop n to i j--
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n=4;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    return 0;
}
