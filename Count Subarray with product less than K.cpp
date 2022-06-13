class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1){
            return 0;
        }
        int left=0,right=0,ans=0;
        long long p=1;
        while(right<n){
            p*=a[right];
            while(p>=k){
               p/=a[left++]; 
            }
            ans+=1+right-left;
            right++;
        }
        
        return ans;
        
    }
};
