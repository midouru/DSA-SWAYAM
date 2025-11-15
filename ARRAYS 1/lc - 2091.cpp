 int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1) return 1;
        int Min = 0;
        int Max = 0;
        for(int i=1;i<n;i++){
            if(nums[i] < nums[Min]){
                Min = i;
            }
            if(nums[i] > nums[Max]){
                Max = i;
            }
        }
         
    if(Min > Max) swap(Min,Max);
    int front = Max+1;
    int back = n-Min;
    int both = (Min+1)+(n-Max);
    return min({front,back,both});    


    }
