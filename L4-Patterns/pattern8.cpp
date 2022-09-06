/*
pattern
AAA
BBB
CCC
Formula:
'A'+i-1:
i=1 -> A-1+1=A || A-1+1=A || A-1+1=A
i=2 -> A+2-1=B || A+2-1=B || A+2-1=B
i=3 -> A+3-1=C || A+3-1=C || A+3-1=C
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j =1;
        while(j<=n){
            char ch = 'A'+i-1;
            cout<<ch;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}