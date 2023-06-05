class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m=matrix.size();
        int n=matrix[0].size();
       vector<pair<int,int>> pos;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
           
                if(matrix[i][j]==0)
                {   pair pair1(i,j);
                    pos.push_back(pair1);
                }
                    
                }
            }
           
     for(auto p:pos)
        {
             
              int row=p.first;
               int col=p.second;
                for(int i=0;i<m;i++){
                    matrix[i][col]=0;}
                  
                  for(int j=0;j<n;j++){
                    matrix[row][j]=0;}

        }
        
    }
   
};