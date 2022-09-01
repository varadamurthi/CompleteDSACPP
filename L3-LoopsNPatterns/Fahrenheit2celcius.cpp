#include<iostream>
using namespace std;

/*
The formula:
C = ((F-32)*5)/9
*/

int main(){
    float f;
    float c;
    cout << "Enter the Farenheit value: " << endl;
    cin >> f ;
    c = ((f-32)*5)/9;

    cout << "The converted value is: "<<c<<"Celcius"<<endl;

}

