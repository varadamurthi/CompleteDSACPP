#include<iostream>
using namespace std;
/*
Pattern:
1
2 1
3 2 1

Formula:
i-j+1:
i=1 -> 1-1+1
i=2 -> 2-1+1 || 2-2+1
i=3 -> 3-1+1=3 || 3-2+1=2 || 3-3+1=1
*/
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j=j+1;      
        }
        cout<<endl;
        i =i+1;
    }
}