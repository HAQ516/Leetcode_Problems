class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char>row,col,box;
        for(int i=0;i<board.size();i++){
            row.clear();
            col.clear();
            for(int j=0;j<board[i].size();j++){
                if(row.find(board[i][j])!=row.end() || col.find(board[j][i])!=col.end()
                ){
                    return false;
                }
                if(board[i][j]!='.'){
                row.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                col.insert(board[j][i]);
                }
            }
        }
        int i=0,j,k;
        while(i<9){
            j=(i/3)*3;
            k=(i%3)*3;
            for(int row=j;row<j+3;row++){
                for(int col=k;col<k+3;col++){
                    if(box.find(board[row][col])!=box.end()){
                        return false;
                    }
                    if(board[row][col]!='.'){
                    box.insert(board[row][col]);
                    }
                }
            }
            box.clear();
            i++;
        }
        return true;
    }
};