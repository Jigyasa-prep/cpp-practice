//square patterns using loop
#include<bits/stdc++.h>
using namespace std;
void pattern1(int N){//for rows
    for(int i=0;i<N;i++){//for columns
        for(int j=0;j<N;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//Right angled triangle pattern
//no of * increase one by one in line by line row i contain i+1 *
void pattern2(int N){
    for(int i=0;i<N;i++){
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
void pattern3(int N){
    for(int i=0;i<=N;i++){
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
void pattern4(int N){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
//inverted right angled triangle of *
//outer loop 0 to n
//inner loop n to i j--
void pattern5(int N){
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern1(N);
    pattern2(N);
    pattern3(N);
    pattern4(N);
    pattern5(N);
    return 0;
}
