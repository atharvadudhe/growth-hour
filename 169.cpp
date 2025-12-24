/*
169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
*/

#include<iostream>
using namespace std;

// standard method using hashMap
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> freq;
//         int n = nums.size();
//         for(int num : nums) {
//             freq[num]++;
//             if(freq[num] > n / 2) {
//                 return num;
//             }
//         }
//         return -1; 
//     }
// };

// optimal solution using O(1) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                element = nums[i];
                count++;
            } else if(nums[i] == element){
                count++;
            } else {
                count--;
            }
        }
        return element;
    }
};
