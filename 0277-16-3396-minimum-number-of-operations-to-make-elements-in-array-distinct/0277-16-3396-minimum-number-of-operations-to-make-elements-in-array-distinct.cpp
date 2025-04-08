class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int start = 0, n = nums.size();
        int ans = 0;
        bool vs[105];

        while (start < n) {
            memset(vs, 0, sizeof vs);
            bool works = true;
            for (int i = start; i < n; i++) {
                if (vs[nums[i]]) {
                    works = false;
                    break;
                }
                vs[nums[i]] = true;
            }
            if (works) return ans;

            start += 3;
            ans++;
        }
        return ans;
    }
};