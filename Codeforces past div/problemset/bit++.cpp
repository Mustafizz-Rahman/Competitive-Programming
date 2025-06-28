#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int count = 0;
    while(t--){
        string str;
        cin>>str;

        if(str == "x++" || str == "++x"){
            count +=1;
        }else{
            count -=1;
        }
    }
    cout<<count<<endl;
}