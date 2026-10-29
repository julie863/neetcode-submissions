class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;                          // første position
        int r = numbers.size() - 1;         // sidste position

        while (l < r) {
            int sum = numbers[l] + numbers[r];   // værdierne på de to positioner

            if (sum == target) {
                return {l + 1, r + 1};      // +1 fordi svaret er 1-indekseret
            } else if (sum < target) {
                l++;                        // for lille → større tal fra venstre
            } else {
                r--;                        // for stor → mindre tal fra højre
            }
        }
        return {};
    }
};