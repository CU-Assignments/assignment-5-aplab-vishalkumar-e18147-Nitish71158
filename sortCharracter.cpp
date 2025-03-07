class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        string ans="";
        multimap<int,char>m2;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:m){
            m2.insert({i.second,i.first});
        }
        for(auto it = m2.rbegin(); it != m2.rend(); ++it)
            ans += string(it->first, it->second);

        return ans;
    }
};
