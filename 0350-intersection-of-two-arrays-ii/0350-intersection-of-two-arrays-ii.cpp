class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          vector<int> ans;
        int size1=nums1.size();
        int size2=nums2.size();
        for(int i=0;i<size1;i++){
            for(int m=0;m<size2;m++){
                if(nums1.at(i)==nums2.at(m)){
                    ans.push_back(nums1.at(i));
                   nums2.at(m)=-1;
                    break;
                }
                 if(nums1.at(i)==nums2.at(m)){
                    break;
                 }
            }
             
        }
        return ans;
    }
    
};