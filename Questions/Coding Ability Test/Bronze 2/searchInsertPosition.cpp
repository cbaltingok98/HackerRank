class Solution
{
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target)
    {
        // write your code here
        int index;
        bool found = false;

        if (!A.empty())
        {
            for (int i = 0; i < A.size() && !found; i++)
            {
                if (target == A.at(i))
                {
                    index = i;
                    found = true;
                }
                if (target < A.at(i))
                {
                    index = i;
                    found = true;
                }
            }
            if (!found)
                index = A.size();
        }
        else
        {
            index = 0;
        }

        return index;
    }
};