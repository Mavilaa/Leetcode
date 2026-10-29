class Solution {
  private:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int partition(std::vector<int> &nums, int low, int high) {

        int randomPivot = low + rand() % (high - low + 1);
        swap(nums[randomPivot], nums[high]);

        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] <= pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        return i + 1;
    }

    void quickSort(std::vector<int> &nums, int low, int high) {
        if (low < high) {
            int pi = partition(nums, low, high);
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }

  public:
    bool containsDuplicate(vector<int> &nums) {
        quickSort(nums, 0, nums.size() - 1);

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};
