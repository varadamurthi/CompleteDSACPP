#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 2;
    int sum = 0;
    cout<<"Enter the n value: "<<endl;
    cin>>n;

    while (i<=n){
        sum = sum+i;
        i = i+2;
    }
    cout<<"The sum of all the even numbers: "<<sum<<endl;
}