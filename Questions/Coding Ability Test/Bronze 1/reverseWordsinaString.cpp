class Solution
{
public:
    /*
     * @param s: A string
     * @return: A string
     */
    string reverseWords(string &s)
    {
        // write your code here
        int head = 0;
        int tail = 0;
        int count = 0;
        bool work = false;
        string newS, temp;
        vector<string> hold;

        for (int i = 0; i < s.size(); i++)
        {
            count += s.at(i) == ' ' ? 1 : 0;
        }
        if (count != s.size())
        {

            for (int i = 0; i < s.size(); i++)
            {
                if (i + 1 < s.size() && i - 1 >= 0)
                {
                    if (s.at(i) == ' ')
                    {
                        if (s.at(i + 1) != ' ' || s.at(i - 1) != ' ')
                        {
                            tail = i - head;
                            newS.assign(s, head, tail);
                            if (newS != "")
                                hold.push_back(newS);
                            work = true;
                        }
                        head = i + 1;
                    }
                }
            }
            if (work)
            {
                newS.assign(s, head, s.size() - 1);
                hold.push_back(newS);
            }
            else
            {
                newS = s;
                hold.push_back(newS);
            }

            while (!hold.empty())
            {

                temp.append(hold.back());
                if (hold.size() != 1)
                    temp.append(" ");
                hold.pop_back();
            }
        }
        else
        {
            temp = "";
        }

        return temp;
    }
};