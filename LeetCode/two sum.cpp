#include <iostream>
#include<vector>
using namespace std;

//Find if two numbers in a sorted array add up to a target



int main(){
    vector<int> arr = {1, 2, 4, 7, 11, 15};
    int left =0;
    int right = arr.size() -1;

    int target = 15;
    int sum =0;

    while(left < right){
        sum = arr[left] + arr [right];

        if (target == sum){
            cout<<arr[left] <<" "<<arr[right];
            break;
        }else if(sum < target){
            // Need a bigger sum, move left pointer to right
            left ++;
        }else{
            right --;
        }
    }


}
