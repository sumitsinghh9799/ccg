#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<string>names;

    names.push("vaish");
    names.push("sujal");
    names.push("adii");
    names.push("ram");


    cout<<names.top();
}