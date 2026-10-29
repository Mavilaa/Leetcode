class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int a = 0;
        int b = 0;
        vector<int> resultado(2);
        bool condicao = true;
        for (int x = 0; x < nums.size(); x++) {
            for (int y = x + 1; y < nums.size(); y++) {
                if ((target - nums[x]) == nums[y] && condicao) {
                    a = x;
                    b = y;
                    condicao = false;
                }
            }
        }

        resultado[0] = a;
        resultado[1] = b;

        return (resultado);
    }
};