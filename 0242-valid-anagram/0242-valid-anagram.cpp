class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        return s == t;
    }
};



















// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int n=s.length();
//         int m = t.length();
//         if(n != m){
//             return false;
//         }
//         sort(s.begin() , s.end());
//         sort(t.begin() , t.end());
//         if(s != t){
//             return false;
//         }
//         return true;
//     }
// };