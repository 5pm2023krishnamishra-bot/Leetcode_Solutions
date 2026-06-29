class Solution {
public:
    double myPow(double x, int n) {
        long binary_form=n;
        double ans=1;
          if(n<0){
           binary_form= -binary_form;
            x=1/x;
        }
        while(binary_form>0){
            if(binary_form%2==1){
                ans=ans*x;
            }
            x=x*x;
            binary_form=binary_form/2;
        }
        return ans;
    }
};