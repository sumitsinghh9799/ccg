#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    
    while(n>0){
        int num=n%10;
        sum+=num;
        n/=10;
    }
    cout<<sum;
    return 0;
}