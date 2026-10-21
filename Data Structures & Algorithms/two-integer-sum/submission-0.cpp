class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> targetContainer;
    
        int index1Number=0;
        int index1=0;
        int index2=0;
   
        for(int i=0;i<nums.size();i++){
            if(targetContainer.count(target-nums[i])){
                 index2=i;
                 index1Number=target-nums[i];
                 break;
            }else{
                targetContainer[nums[i]]++;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]==index1Number){
                index1=j;
                break;
            }
        }
        return {index1, index2};



        
    }
};
