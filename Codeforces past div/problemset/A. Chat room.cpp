#include <iostream>
using namespace std;

int main(){
    string s;

    cin>>s;
    string target = "hello";
     
    //to iterate over the target
    int i = 0;
    for(char c: s){

        if(c == target[i]){
            i+=1;
            if(i == target.size()){
                break;
            }
        }
    }


    if(i == target.size()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}