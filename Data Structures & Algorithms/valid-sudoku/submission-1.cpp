class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r=0;r<=8;r++){
            vector<bool> seenr(9,false);
            for(int c=0;c<=8;c++){
                if(board[r][c] != '.'){
                    int indexr = board[r][c] - '1';
                    if(seenr[indexr] == true)
                        return false;
                    seenr[indexr] = true;
                }
            }
        }
        for(int c=0;c<=8;c++){
            vector<bool> seenc(9,false);
            for(int r=0;r<=8;r++){
                if(board[r][c] != '.'){
                    int indexc = board[r][c] - '1';
                    if(seenc[indexc] == true)
                        return false;
                    seenc[indexc] = true;
                }
            }
        }
        for(int br = 0; br < 9; br += 3){
            for(int bc = 0; bc < 9; bc += 3){
                vector<bool> seenbox(9, false);

                for(int r = br; r < br + 3; r++){
                    for(int c = bc; c < bc + 3; c++){
                        if(board[r][c] != '.'){
                            int index = board[r][c] - '1';
                            if(seenbox[index] == true)
                                return false;
                            seenbox[index] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
