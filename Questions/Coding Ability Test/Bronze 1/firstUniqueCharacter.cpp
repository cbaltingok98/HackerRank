class Solution
{
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str)
    {
        // Write your code here
        vector<int> charSet(27, 0);
        bool stop = true;
        char c = ' ';
        int hold = 0;

        for (int i = 0; i < str.size(); i++)
        {
            c = str.at(i);
            hold = c - 97;
            charSet.at(hold)++;
        }

        for (int i = 0; i < charSet.size() && stop; i++)
        {
            if (charSet.at(i) == 1)
            {
                c = i + 97;
                stop = false;
            }
        }
        return c;
    }
};