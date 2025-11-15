int pivot(vector<int>& nums, int lsum,  int i, int totalSum){
        if(i == nums.size()){
            return -1;
        }
        int rsum = totalSum - lsum - nums[i];
        if(lsum == rsum){
            return i;
        }
        return pivot(nums,lsum + nums[i],i + 1,totalSum);
    }
    int pivotIndex(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        int ans = pivot(nums,0,0,totalSum);
        return ans;

    }
