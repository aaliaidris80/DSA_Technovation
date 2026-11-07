class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                char num = board[i][j];

                if(num == '.')
                    continue;

                int b = (i / 3) * 3 + (j / 3);

                if(row[i].count(num) || 
                   col[j].count(num) || 
                   box[b].count(num))
                {
                    return false;
                }

                row[i].insert(num);
                col[j].insert(num);
                box[b].insert(num);
            }
        }

        return true;
    }
};
