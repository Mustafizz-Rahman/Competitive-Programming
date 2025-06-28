#include <iostream>
#include<vector>
using namespace std;

int main (){

    vector<int> prob(3);
    int t;
    cin>>t;

    int counter = 0;
    while(t--){

        //takes input
    for(int i = 0; i<3; i++){
        cin>> prob[i];
    }

    int sum = 0;
    for(int i=0; i<3; i++){
        sum += prob[i];
    }
    if(sum>=2){
        counter+=1;
    }
    }
    cout<<counter<<endl;



}