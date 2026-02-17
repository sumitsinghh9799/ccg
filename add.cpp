#include <iostream>
#include<vector>
using namespace std;

int main(){
    string name;;
   
    vector<string> names={"sumit", "vaibhav", "vaishnavi"};
    names.push_back("anand");//add
    // names.pop_back();//remove
   for(string name : names){
cout<<name<<endl;
}
return 0;
    }