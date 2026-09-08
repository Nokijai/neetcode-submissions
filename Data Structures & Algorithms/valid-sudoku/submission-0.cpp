class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int , unordered_set<char>> cols , rows;
        map<pair<int , int> , unordered_set<char>> squares;
        

        for(int r = 0 ; r < board.size() ; r++){
            for(int c = 0 ; c < board[0].size(); c++){
                if (board[r][c] == '.') continue;
                pair<int , int> square_key = {r / 3 , c / 3};

                if(rows[r].find(board[r][c]) != rows[r].end() ){
                    return false;
                }else {
                    rows[r].insert(board[r][c]);
                }


                if(cols[c].find(board[r][c]) != cols[c].end()) {
                    return false;
                }else{
                    cols[c].insert(board[r][c]);
                }


                if(squares[{r / 3 , c / 3 }].find(board[r][c]) != squares[{r / 3 , c / 3 }].end()){
                    return false;
                }else{
                    squares[square_key].insert(board[r][c]);
                }
            }
        }
        return true;
    }
};
