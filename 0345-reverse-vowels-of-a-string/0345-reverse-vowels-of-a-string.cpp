// class Solution {
// public:
//     string reverseVowels(string s) {
//         int start = 0;
//         int end = s.length() - 1;
        
//         while(start < end){
//             if(
//                 (s[start]== 'A' || s[start]== 'a' || s[start]== 'E' || s[start]== 'e' || s[start]== 'I' || s[start]== 'i' || s[start]== 'O' || s[start]== 'o' || s[start]== 'U' || s[start]== 'u') && (s[end]== 'A' || s[end]== 'a' || s[end]== 'E' || s[end]== 'e' || s[end]== 'I' || s[end]== 'i' || s[end]== 'O' || s[end]== 'o' || s[end]== 'U' || s[end]== 'u')
//             ){
//                 swap(s[start] , s[end]);
//                 start++;
//                 end--;
//             }

//             else if(
//                 (s[start]== 'A' || s[start]== 'a' || s[start]== 'E' || s[start]== 'e' || s[start]== 'I' || s[start]== 'i' || s[start]== 'O' || s[start]== 'o' || s[start]== 'U' || s[start]== 'u') && (!(s[end]== 'A' || s[end]== 'a' || s[end]== 'E' || s[end]== 'e' || s[end]== 'I' || s[end]== 'i' || s[end]== 'O' || s[end]== 'o' || s[end]== 'U' || s[end]== 'u'))
//             ){
//                 end--;
//             }

//             else{
//                 start++;
//             }
//         }

//         return s;

//     }
// }; // It's Look lenthy So thats why we will make a boolean function that store all vowels



class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'A' ||
               ch == 'e' || ch == 'E' ||
               ch == 'i' || ch == 'I' ||
               ch == 'o' || ch == 'O' ||
               ch == 'u' || ch == 'U';
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {

            if (!isVowel(s[start])) {
                start++;
            }
            else if (!isVowel(s[end])) {
                end--;
            }
            else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};