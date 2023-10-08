/*Develop a program that uses a while loop to continuously prompt the user for 
a password until the correct password is entered. (You can decide the correct password)*/
# include <iostream>
using namespace std;

int main(){
    string key = "Hello";
    string pass;
    cout<<"Enter password"<<endl;
    cin>>pass;
    while(pass != key)
    {
        cout<<"Incorrect password. Please Enter again"<<endl;
        cin>>pass;
    }
     return 0;
}