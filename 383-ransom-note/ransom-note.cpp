class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>um;
        for(char x: magazine){
            um[x]++;
        }
        for(char x: ransomNote){
            if(um.find(x) != um.end() ){
                um[x]--;
            }
            else{
                return false;
            }

            if(um[x] ==0) um.erase(x);
        }

        return true;
    }
};