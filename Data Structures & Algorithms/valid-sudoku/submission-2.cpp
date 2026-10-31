class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        map<int,set<char>> row_set;
        map<int,set<char>> col_set;
        map<pair<int,int>,set<char>> box_set;
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j]!='.'){
                    if(row_set[i].count(board[i][j])) return false;
                    row_set[i].insert(board[i][j]);

                    int box_row = i/3;
                    int box_col = j/3;
                    if(box_set[{box_row,box_col}].count(board[i][j])) return false;
                    box_set[{box_row,box_col}].insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(col_set[i].count(board[j][i])) return false;
                    col_set[i].insert(board[j][i]);
                }
                
            }
        }

        return true;
    }
};
