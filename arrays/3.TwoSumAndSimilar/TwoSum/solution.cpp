#include <iostream>
#include <vector>

using namespace std;

// optimised Approach(Hashing but on the way) : TC : O(N) to O(N^2) , SC : O(N)
vector<int> twoSum(vector<int> &nums,int target){
    unordered_map<int,int> mp;
    vector<int> ans(2,-1);

    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i]) != mp.end()){
            ans[0] = i;
            ans[1] = mp[target-nums[i]];
            return ans;
        }else{
            mp[nums[i]] = i;
        }
    }
    return ans;
}

// Brute Force : TC : O(N^2)
vector<int> twoSumBruteForce(vector<int> &nums,int target){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}