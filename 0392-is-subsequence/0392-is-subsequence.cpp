class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() == 0){
            return true;
        }
        int slow = 0;
        for(int fast = 0 ; fast < t.length() ; fast++){
            if(s[slow] == t[fast]){
                slow++;
            }
            
            if(slow == s.length()){
                return true;
            }
        }
        return false;
    }
};