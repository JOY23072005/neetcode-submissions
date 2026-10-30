class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        if(s.length()==0) return true;
        
        unordered_map<char,int> hash;
        
        for(char c: s){
            hash[c]++;
        }

        for(char c: t){
            hash[c]--;
            if(hash[c]<0){
                return false;
            }
        }

        for(char c: s){
            if(hash[c]>0) return false;
        }

        return true;
    }
};
