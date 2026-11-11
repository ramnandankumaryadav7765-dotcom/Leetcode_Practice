// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        // if(s.length() != t.length()){
        //     return false;
        // }
//         sort(s.begin() , s.end());
//         sort(t.begin() , t.end());

//         return s == t;
//     }
// };


class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char , int> smp;
        unordered_map<char , int> tmp;

        for(int i = 0 ; i<s.length() ; i++){
            smp[s[i]]++;
            tmp[t[i]]++;
        }

        if(smp != tmp){
            return false;
        }

        return true;
    }
};