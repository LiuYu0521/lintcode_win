class Solution {
public:
    /**
     * Calculate the total number of distinct N-Queen solutions.
     * @param n: The number of queens.
     * @return: The total number of distinct solutions.
     */
    int totalNQueens(int n) {
        // write your code here
        int res = 0;
        vector<int> pos(n, -1);
        dfs(pos, 0, res);
        return res;
    }
    void dfs(vector<int> &pos, int row, int &res)
    {
        int n = pos.size();
        if(row == n)
        {
            res++;
        }
        else
        {
            for(int col = 0; col < n; col++)
            {
                if(isValid(pos, row, col))
                {
                    pos[row] = col;
                    dfs(pos, row + 1, res);
                    pos[row] = -1;
                }
            }
        }
    }
    bool isValid(vector<int> &pos, int row, int col)
    {
        for(int i = 0; i < row; i++)
        {
            if(pos[i] == col || abs(i - row) == abs(col - pos[i]))
                return false;
        }
        return true;
    }
};
