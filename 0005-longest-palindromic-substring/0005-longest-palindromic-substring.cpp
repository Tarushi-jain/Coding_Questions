class Solution {
public:
    string ans="";
    void sub(string s , int i ,int j){
         while(i>=0 && j<s.size()){
             if(s[i]!=s[j]) break;
             i--;
             j++;
         }
         if(ans.size()< j-i){
             ans = s.substr(i+1,j-i-1);
         }
    }
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            sub(s,i,i);
            sub(s,i,i+1);
        }
        return ans;
    }
};