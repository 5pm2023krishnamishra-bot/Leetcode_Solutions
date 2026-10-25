class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        bool pallindrome=true;
        while(start<end){
            if(!((s[start]>=48&&s[start]<=57)||(s[start]>=65&&s[start]<=90)||(s[start]>=97&&s[start]<=122))){
                start++;
                continue;
            }
            if(!((s[end]>=48&&s[end]<=57)||(s[end]>=65&&s[end]<=90)||(s[end]>=97&&s[end]<=122))){
                end--;
                continue;
            }
            char a=tolower(s[start]);
            char b=tolower(s[end]);
            if(a!=b){
                pallindrome=false;
                break;
            }
            else{
                start++;
                end--;
            }

        }
        return (pallindrome);
    }
};