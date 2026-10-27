class Solution {
public:
    bool isFreqSame(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return (false);
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            int WindIdx=0,idx=i;
            int WindFreq[26]={0};
            while(WindIdx<s1.length() && idx<s2.length()){
                WindFreq[s2[idx]-'a']++;
                WindIdx++;idx++;
            }
            if(isFreqSame(freq,WindFreq)){
                return (true);
            }
        }
        return (false);
    }
};