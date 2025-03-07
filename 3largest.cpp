class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        vector<int>arr;
        nums.empty();
        for(auto i:s){
            arr.push_back(i);
        }
        cout<<arr.size();
        if(arr.size()<3){
            return arr[arr.size()-1];
        }

        return arr[arr.size()-3];
    }
};
