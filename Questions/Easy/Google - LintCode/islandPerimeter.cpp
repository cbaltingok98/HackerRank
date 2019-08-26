class Solution {
public:
    /**
     * @param grid: a 2D array
     * @return: the perimeter of the island
     */
    int islandPerimeter(vector<vector<int>> &grid) {
        // Write your code here
        int perimeter = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid.at(i).size(); j++) {
                if(grid.at(i).at(j) == 1){
                    
                    if(j - 1 < 0 || grid.at(i).at(j - 1) == 0) perimeter++;
                    if(j + 1 >= grid.at(i).size() || grid.at(i).at(j + 1) == 0) perimeter++;
                    if(i - 1 < 0 || grid.at(i - 1).at(j) == 0) perimeter++;
                    if(i + 1 >= grid.size() || grid.at(i + 1).at(j) == 0) perimeter++;
                }
            }
        }
        return perimeter;
    }
};