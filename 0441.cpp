class Solution {
  public:
    int arrangeCoins(int n) {
        long long a = 0ll;
        a = static_cast<long long>(n);
        long long k = (-1 + sqrt(1 + 8 * a)) / 2;
        return k;
    }
};