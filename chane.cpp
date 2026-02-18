#include<iostream>
#include<list>
using namespace std;

int main(){

    list<string> cars = {"honda","cityz","baleno"};
    
    cars.front()="thar";//change first element

    cars.back()="scorpio";//change last element
    
    //get first element
    cout<<cars.front()<<" ";
    //get last element
    cout<<cars.back();
    

    return 0;
}