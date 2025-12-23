// 2149. Rearrange Array Elements by Sign
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int> & nums) {
        int n = nums.size();
        vector<int> ans(n);
        int posIndex = 0;
        int negIndex = 1;

        for(int num : nums){
            if(num>0){
                ans[posIndex] = num;
                posIndex += 2;
            }else{
                ans[negIndex] = num;
                negIndex+=2;
            }
        }
        return ans;

    }
};