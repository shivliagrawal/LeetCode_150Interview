#include <iostream>
#include <vector> 
using namespace std; 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i =0; i < nums.size(); i++) {
            if(nums[i] == val) {
                k--;
            }
        }
        int j=0;
        for (int i =0; i< nums.size(); i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
    return k;
	};
};
