class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        vector<string> temp(str.size(), " ");
        
        for(int i = 0; i < str.size(); i++) {
    
            temp.at((i + offset) % str.size()) = str.at(i);
            
        }
        str = "";
        for(string i : temp) {
            str += i;
        }
        cout << str;
    }
};