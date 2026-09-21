class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()) return false;
        unordered_map<char, int>um;
        for(int i=0; i<s.size(); i++){
            um[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            if(um.find(t[i])== um.end()) return false;
            um[t[i]]--;
            if(um[t[i]]==0) um.erase(t[i]);
        }
        return um.size()==0;
    }
};