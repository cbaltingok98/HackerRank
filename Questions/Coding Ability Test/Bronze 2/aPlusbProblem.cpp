class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // write your code here
        int *i, *j;
        i = &a;
        j = &b;
        return *i + *j;
    }
};