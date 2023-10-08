/*Q4) Build a program that takes a user's age as input and uses if-else statements to determine
 if the user is a child, teenager, adult, or senior citizen.*/

# include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: "<<endl;
    cin>>age;
    if ((age>=1) && (age<13))
    {
        cout<<"The user is a child"<<endl;
    }
    else if((age>=13)&&(age<=17))
    {
        cout<<"The user is a teenager"<<endl;

    }
    else if((age>=18)&&(age<=60))
    {
        cout<<"The user is a adult"<<endl;
    }
    else{
        cout<<"The user is a senior citizen"<<endl;
    }
    return 0;

}