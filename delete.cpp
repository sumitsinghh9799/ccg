#include<iostream>
#include<list>
using namespace std;

int main(){

    list<string> cars = {"honda","cityz","baleno"};
    
    cars.pop_front();

    cars.pop_back();

    for(string car : cars){
        cout <<car <<endl;

    }
return 0;
}