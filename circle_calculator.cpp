#include <iostream>

// declaring global variable
const double pi = 3.14159;

int main(){

    // declaring and initializing variables
    double rad = 0, diameter = 0, circumference = 0, area = 0;
    

    // asking user for input
    std::cout<<"Please Enter The Radius of a Circle: ";
    std::cin>>rad;

    // running calculations
    diameter = 2 * rad;
    circumference = 2 * pi * rad;
    area = pi * rad * rad;

    std::cout<<"Diameter = "<<diameter<<'\n'
                <<"Circumference = "<<circumference<<'\n'
                    <<"Area = "<<area;

    return 0;
}