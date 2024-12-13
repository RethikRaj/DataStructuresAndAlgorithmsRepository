#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int leftIndex = 0;
    int rightIndex = numbers.size()-1;
    vector<int> ans;

    while(leftIndex < rightIndex){
        int sum = numbers[leftIndex] + numbers[rightIndex];
        if(sum < target){
            leftIndex++;
        }else if(sum > target){
            rightIndex--;
        }else{
            ans.push_back(leftIndex);
            ans.push_back(rightIndex);
            return ans;
        }
    }
    return ans;
}