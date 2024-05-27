class Solution {
public:
    string compressedString(string word) {
        string com = "";
        int a = 0;
        int n = word.size();
        
        while(a < n ){
            char currChar = word[a];
            int ct = 0;
            while(a < n && word[a] == currChar && ct < 9){
                ct++;
                a++;
            }
           com += to_string(ct) + currChar;
        }
        return com;
    }
};