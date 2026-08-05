#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1, m;

        while(l <= h) {
            m = (l+h)/2;

            if(nums[m] == target)
                return m;
            else if(nums[m] < target)
                l = m + 1;
            else
                h = m - 1;
        }
        return l;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,3,5,6};
    int target = 5;

    cout << obj.searchInsert(nums, target); //Output: 2
}