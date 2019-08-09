class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res(2, 0);
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if ((nums.at(i) + nums.at(j)) == target) {
					res.at(0) = i;
					res.at(1) = j;
					break;
				}
			}
		}
		return res;
	}
};