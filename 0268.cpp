class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int total = 0;
        int soma = 0;
        int maior = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            soma = soma + nums[i];
        }
        total = (maior * (maior + 1)) / 2;
        return (total - soma);
    }
};