/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    string name;
    int license;
    public:
    Dog();
    Dog(string nameIn);
    Dog(int licenseIn);
    Dog(string nameIn, int license);
    int getLicense();
    string getName();
};

Dog::Dog(){
    cout << "created a dog" << "\n";
    name= "NA";
    license=0;
}

Dog::Dog(string nameIn){
    name=nameIn;
    license=0;
}

Dog::Dog(int licenseIn){
    license=licenseIn;
    name= "NA";
}

Dog::Dog(string nameIn, int licenseIn){
    name=nameIn;
    license=licenseIn;
}

int Dog::getLicense(){
    return license;
}
string Dog::getName(){
    return name;
}