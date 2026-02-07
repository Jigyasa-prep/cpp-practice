/*Sum of first last element in array
Easy

Company
Given an integer array nums, return the sum of the 1st and last element of the array.


Example 1

Input: nums = [2, 3, 4, 5, 6]

Output: 8

Explanation: 1st element = 2, last element = 6, sum = 2 + 6 = 8.

Example 2

Input: nums = [2]

Output: 4

Explanation: 1st element = last element = 2, sum = 2 + 2 = 4.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    };
    int sum=0;
    if(n<=0){
        sum=0;
    }else{
    sum=arr[0]+arr[n-1];
    };
    cout<<"sum of first and last element in array"<<sum;
    return 0;
}