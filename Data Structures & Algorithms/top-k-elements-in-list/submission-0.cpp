class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int x:nums){
            if(count[x]<1){
                count[x]++;
            }else{
                count[x]++;
            }
        }
        int y=0;
        vector<int> results;
        while (y<k){
            int highestNumber=0;
            int frequencyIndex=0;
            for(auto number:count){
                if(number.second>highestNumber){
                    highestNumber = number.second;
                    frequencyIndex = number.first;
                }
            }
            count.erase(frequencyIndex);
            results.push_back(frequencyIndex);
            y++;
            
        }
        return results;
    }
};
