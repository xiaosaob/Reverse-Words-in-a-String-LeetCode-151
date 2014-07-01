// Given an input string, reverse the string word by word.

// For example,
// Given s = "the sky is blue",
// return "blue is sky the".

class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(),s.end());
        int start = 0;
        string res = "";
        while(start<s.size()) {
            while(start < s.size() && isspace(s[start])) ++start;
            if(start == s.size()) break;
            int end = start+1;
            while(end < s.size() && !isspace(s[end])) ++end;
            reverse(s.begin()+start,s.begin()+end);
            res += s.substr(start,end-start);
            res += " ";
            start = end+1;
        }
        s = res.substr(0,res.size()-1);
    }
    
    
};
