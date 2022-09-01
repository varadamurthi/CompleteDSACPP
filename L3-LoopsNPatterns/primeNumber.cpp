#include<iostream>
using namespace std;

int main(){
    int i=2;
    int n;
    int flag =0;
    cout<<"Enter the value you have in your mind:" << endl;
    cin >> n;
    while(i<= n/2){
        if (n%i==0){
                flag =1;
                break;
        }
        i=i+1;
        }
        
        if (flag==1){
            cout<<"Not a Prime number"<<endl;

        }
        else{
            cout<<"Prime number"<<endl;
        }
    }
