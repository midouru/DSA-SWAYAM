 vector<int> runningSum(vector<int>& nums) {
         std::ios::sync_with_stdio(0);
         std::cin.tie(0);

        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
