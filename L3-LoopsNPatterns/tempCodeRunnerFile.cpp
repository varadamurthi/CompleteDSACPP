#include<iostream>
using namespace std;

int main(){
    int i=2;
    int n;
    cout<<"Enter the value you have in your mind:" << endl;
    cin >> n;
    while(i<n){
        if (n%i==0){
                flag =1;
                break;
        }
        i=i+1;
        }
        
        if (flag==1){
            cout<<"Prime number"<<endl;

        }
        else{
            cout<<"Not a prime number"
        }
    }
