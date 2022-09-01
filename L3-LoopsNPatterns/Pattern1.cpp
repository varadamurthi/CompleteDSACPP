#include<iostream>
using namespace std;
/*
***
***
***
*/
int main(){
    int i =1; //rows
    int n;
    cout << "Enter the row value: "<<endl;
    cin >>n;

    while(i<=n){
        
        int j =1; //columns
        while (j<=n){
            cout<<"*"<<" ";
            j = j+1;
        }
        cout<<endl;
        i=i+1;
    }
}