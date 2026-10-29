class Solution {
  public:
    vector<int> getConcatenation(vector<int> &nums) {
        vector<int> ans(nums.size() * 2);
        for (int x = 0; x < nums.size(); x++) {
            ans[x] = nums[x];
            ans[x + nums.size()] = nums[x];
        }

        return (ans);
    }
};