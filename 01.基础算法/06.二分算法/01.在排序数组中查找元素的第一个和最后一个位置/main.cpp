class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int n = nums.size();

        if (n == 0) return { -1, -1 };

        int left = 0, right = n - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] >= target) right = mid;
            else left = mid + 1;
        }
        if (nums[left] != target) return { -1, -1 };
        int retleft = left;

        left = 0, right = n - 1;
        while (left < right)
        {
            int mid = (left + right + 1) / 2;
            if (nums[mid] <= target) left = mid;
            else right = mid - 1;
        }
        int retright = right;

        return { retleft, retright };

    }
};