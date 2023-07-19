// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Example 2:

// Input: nums = [1,2,3,4]
// Output: false
// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
            if(nums.size()<1){
                return false;
            }
    unordered_map<int,int> hashing;
        for( int check : nums){
            // checking the count and returning 
            if(hashing[check]>=1){
                return true;
            }
            // increasing count
            hashing[check]++;
        }

        return false;
    }
};
