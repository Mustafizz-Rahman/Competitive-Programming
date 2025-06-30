#include <iostream>
using namespace std;

int main(){
    string str;

    cin>>str;

    string vowel = "aeyiou";
    string result = "";
    for (char c : str){
        char lower = tolower(c);
        if(vowel.find(lower) == string::npos){
            //c in not a vowel 

            result += ".";
            result += lower;
        }
    }

    cout<<result<<endl;
}
