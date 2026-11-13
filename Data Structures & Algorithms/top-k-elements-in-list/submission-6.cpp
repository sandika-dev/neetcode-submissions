class Solution {
public:
    static bool compare(pair<int,int> a,pair<int,int> b){
            return a.second >b.second;
        }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int x:nums){
            if(count[x]<1){
                count[x]++;
            }else{
                count[x]++;
            }
        }

        
        vector<int> results;
        vector<pair<int,int>> vec (count.begin(),count.end());
        sort(vec.begin(),vec.end(),compare);
        for(int i=0;i<k;i++){
            results.push_back(vec[i].first);
        }
        return results;


        
    }
};
