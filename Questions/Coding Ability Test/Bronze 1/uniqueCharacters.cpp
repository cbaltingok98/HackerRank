class Solution
{
public:
    /*
     * @param str: A string
     * @return: a boolean
     */

    bool isUnique(string &str)
    {
        // write your code here

        bool duplicate = true;

        for (int i = 0; i < str.size() && i + 1 < str.size(); i++)
        {
            for (int j = i + 1; j < str.size(); j++)
            {
                if (str.at(i) == str.at(j))
                    duplicate = false;
            }
        }
        return duplicate;
    }
};