#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//nums = [-1,0,1,2,-1,-4]
//sorted [-4,-1,-1,0,1,2]

int main (){
    int n;

    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums [i];
    }
    
    //sort the array
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size()-1; i++){
        //check the duplicates and skip them
        if(i>0 && nums [i] == nums[i-1]) continue;

    }
    
}