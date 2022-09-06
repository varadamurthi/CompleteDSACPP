#include<iostream>
using namespace std;

/* 
....*
...*.*
..*.*.*
.*.*.*.*
*.*.*.*.*.  

     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

 
*/


int main(){
    cout<<"Enter the number:"<<endl;
    int n;
    cin>>n;
    int i =1;

   
    while(i<=n){
        int n_space=n-i;
        int s = 0; //looping for inital space before the character
        int j = 1; //looping for character
        //spaces
        while(s<=n_space){
            cout<<" ";
            s=s+1;
        }
        //characters
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    }
