class Solution
{
public:
    /**
     * @param str: The identifier need to be judged.
     * @return: Return if str is a legal identifier.
     */
    bool isLegalIdentifier(string &str)
    {
        // Write your code here.
        bool firstCHar = true;

        for (int i = 0; i < str.size(); i++)
        {
            if (str.at(i) != ' ')
            {
                if (isalpha(str.at(i)) && i == 0)
                {
                    firstCHar = false;
                }
            }
        }
        return !firstCHar;
    }
};