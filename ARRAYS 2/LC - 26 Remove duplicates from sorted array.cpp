int pivotIndex(vector<int>& nums) {
        int sum = std::accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int lsum = 0;
        for(int i=0;i<n;i++){
            int rsum = sum - lsum - nums[i];
            if(rsum == lsum){
                return i;
            }
            lsum = lsum + nums[i];
        }
        return -1;
    }
