// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        multimap<int, char, greater<>>mmp;
        for(auto& i: mp){
            mmp.insert({i.second, i.first});
        }
        string ans = "";
        for (auto& i : mmp){
            auto temp = i.first;
            while(temp--){
                ans+=i.second;
            }
        }
        return ans;
    }
};
