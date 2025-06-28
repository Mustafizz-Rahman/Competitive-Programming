#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, k;

    cin>>n>>k;

    vector<int> scores(n);

    for(int i=0; i<n; i++){

        cin>>scores[i];

    }
    
    int target = scores[k-1];

    int upgrade = 0;

    for(int i=0; i<n; i++){
        if(scores[i] >= target && scores[i]>0 ){
            upgrade +=1;
        }
    }
    cout<<upgrade<<endl;

    
}