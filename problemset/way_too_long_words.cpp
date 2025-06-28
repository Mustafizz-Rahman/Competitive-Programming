#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
     string s;
     cin>>s;

     if(s.size()<=10){
        cout<<s<<endl;
     }else{
     string sol;
     string len = to_string(s.size()-2);
     sol += s[0];
     sol += len;
     sol += s[s.size()-1];
     cout<<sol<<endl;
     }
    }

}