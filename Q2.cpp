/*Q2) Develop a program that calculates the area of a circle using a constant
 value for pi (π). Use appropriate constants for radius and pi.*/

# include <iostream>
using namespace std;

int main(){
    const double pi = 3.14;
    double r;
    cout<<"Enter the radius of circle(r)"<<endl;
    cin>>r;
    double area = pi*(r*r);
    cout<<"The area of circle of radius "<<r<<" is: "<<area<<endl;
    return 0;

}



