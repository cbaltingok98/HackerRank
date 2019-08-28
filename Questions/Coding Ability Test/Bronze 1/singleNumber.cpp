class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        map <int, int> nums;
        map <int, int>::iterator itr;
        bool found = false;
        int uniqueInt;
        
        for(int i = 0; i < A.size(); i++){
            for(itr = nums.begin(); itr != nums.end(); itr++) {
                if(nums.empty()){
                nums.insert(pair<int, int> (A.at(i), 1));
                } else if (itr->first == A.at(i)) {
                    itr->second++;
                }
            }
            if(!found) {
                nums.insert(pair<int, int> (A.at(i), 1));
            }
            
        }
        
        for(itr = nums.begin(); itr != nums.end(); itr++) {
            if(itr->second == 1) {
                uniqueInt = itr->first;
            }
        }
        
        return uniqueInt;
        
    }
};