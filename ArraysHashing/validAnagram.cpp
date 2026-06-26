class Solution {
public:
    bool isAnagram(string s, string t) {

        // if (s.length() != t.length())
        //     return false;

        // int a1[26] = {0};
        // int a2[26] = {0};

        // for (int i = 0; i < s.length(); i++) {
        //     a1[tolower(s[i]) - 'a']++;
        //     a2[tolower(t[i]) - 'a']++;
        // }

        // for (int i = 0; i < 26; i++) {
        //     if (a1[i] != a2[i])
        //         return false;
        // }

        // return true;
 
        unordered_map <char,int>mp;
        for(char c:s) mp[c]++;
        for(char c:t) mp[c]--;
        for(auto p:mp){
            if(p.second !=0){
                return false;
            }
        }
        return true;
    }
};
