#include<iostream>
using namespace std;
int main() {

    double num;
   cout<<"enter a number"<<endl;
   cin>>num;

    if (num < 0.0)
        cout<<"you entered a neagtive number"<<endl;
    else if (num > 0.0)
        cout<<"you entered a positive number"<<endl;
    else
        cout<<"you enetered 0"<<endl;
    return 0;
}
