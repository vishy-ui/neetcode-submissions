class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        //col check
        for (int i=0 ; i<9;i++)
        {
            unordered_map<char,int> col;
            for(int j=0;j<9;j++)
            {   if (board[j][i]!= '.')
                {
                   col[board[j][i]]++;
                    if( col[board[j][i]] >= 2)
                    {return false;}
                }
            }
        }

        //row check
        for (int i=0 ; i<9;i++)
        {
            unordered_map<char,int> col;
            for(int j=0;j<9;j++)
            {
                if (board[i][j]!= '.')
                {
                    col[board[i][j]]++;
                    if(col[board[i][j]] >= 2)
                    { return false;}
                }
            }
        }

        //box check
        int x=0,y=0;
        for (int i=1 ; i<=3 ; i++)
        {
            for (int j=1 ; j<=3 ; j++)
            {
                unordered_map<char,int> mp;
                for(int p=0;p<3;p++)
                {
                    for(int q=0;q<3;q++)
                    {
                        if (board[p+x][q+y] !='.')
                        {
                            mp[board[p+x][q+y]]++;
                            if (mp[board[p+x][q+y]] >=2)
                            {return false;}
                        }
                    }
                }
                y=y+3;
            }
            x=x+3;
            y=0;
        }
        
        return true;
        
    }
};