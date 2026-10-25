class Solution {
public:
    string removeOccurrences(string s, string part) {
        int spart=part.length();
        while(s.find(part)<s.length()){
            s.erase(s.find(part),spart);
        }
        return (s);
    }
};