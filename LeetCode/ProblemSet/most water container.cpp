#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> bars(n);
    for(int i=0; i<n; i++){
        cin>>bars[i];
    }

    int start = 0;
    int end = bars.size()-1;

    int maximum_area = 0;
    

        while(start < end){

        int height = min(bars[start], bars[end]);
        int width = (end - start);
        int area = height * width;
        maximum_area = max(area, maximum_area);

        if(bars[start] < bars[end]){
            start++;
        }else{
            end--;
        }
    }

    cout<<maximum_area;

}