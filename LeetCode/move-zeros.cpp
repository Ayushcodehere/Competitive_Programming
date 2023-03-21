#include<vector>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> num;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                num.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            num.push_back(0);
        }
        nums=num;
    }
};