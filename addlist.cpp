#include<iostream>
#include<list>
using namespace std;

int main(){

    list<string> cars = {"honda","cityz","baleno"};
    
    cars.push_front("Thar");

    cars.push_back("Scorpio");

    for(string car : cars){
        cout <<car <<endl;

    }
return 0;
}