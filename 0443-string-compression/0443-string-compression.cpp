class Solution {
public:
    int compress(vector<char>& chars) {
        string str = "";
        int freq = 1;

        for(int i = 0; i < chars.size()-1; i++){

            if(chars[i] == chars[i+1]){
                freq++;
            }
            else{
                str += chars[i];

                if(freq > 1){
                    str += to_string(freq);
                }

                freq = 1;
            }
        }

        // We use this to process the final group
        str += chars[chars.size()-1];

        if(freq > 1){
            str += to_string(freq);
        }

        for(int i = 0; i < str.length(); i++){
            chars[i] = str[i];
        }

        return str.length();
    }
};