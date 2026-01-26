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
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    cout<<endl;
    }
};
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
    cout<<endl;
    }
    };
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
};
void pattern11(int n) {
    // First row starts by printing a single 1.
    int start = 1;
    
    // Outer loop for the number of rows
    for (int i = 0; i < n; i++) {
        // If the row index is even, print 1 first in that row
        if (i % 2 == 0) start = 1;
        
        // If the row index is odd, print 0 first in that row
        else start = 0;
        
        // Inner loop to print alternating 1's and 0's in each row
        for (int j = 0; j <= i; j++) {
            cout << start;
            // Alternate between 1 and 0
            start = 1 - start;
        }

        // Move to the next line after each row is printed
        cout << endl;
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
    pattern7(n);
    pattern8(n);
    pattern10(n);
    pattern11(n);
    return 0;
}
