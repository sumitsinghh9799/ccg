#include <iostream>
#include<vector>
using namespace std;

int main(){
    string name;
   
    vector<string> names={"sumit", "vaibhav", "vaishnavi"};
    names[1]="adii";
    cout<<names[1];
   // for(string name : names){
//cout<<name<<endl;
//}
return 0;
    }