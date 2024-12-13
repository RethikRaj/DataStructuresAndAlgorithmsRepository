#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

// XOR APPROACH
int findUnique(vectot<int> &arr){
    int res = 0;
    for(int ele : arr){
        res = res ^ ele;
    }
    return res;
}

// 2*UniqueSum - TotalSum
int findUnique2(vector<int> &arr){
    unordered_set<int> us;
    int uniqueSum = 0;
    int totalSum = 0;

    for(int ele : arr){
        if(us.find(ele) == us.end()){
            us.insert(ele);
            uniqueSum += ele;
        }
        totalSum += ele;
    }

    return 2*uniqueSum - totalSum;

}

// Hashing and then counting
int findUnique3(vector<int> &arr){
    unordered_map<int,int> mp;

    for(int ele : arr){
        mp[ele]++;
    }

    for(auto it : mp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

// Sorting and then counting
int findUnique4(vector<int> &arr){
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
    return arr[arr.size()-1];
}
