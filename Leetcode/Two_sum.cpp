#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int x = 0; x < nums.size(); x++) {
            for(int y = x + 1; y < nums.size(); y++) {
                if(nums[x] + nums[y] == target) {
                    ans.push_back(x);
                    ans.push_back(y);
                    return ans;
                }
            }
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    for(int i : result){
        cout << i << " "; //Output: 0 1
    }

    return 0;
}
