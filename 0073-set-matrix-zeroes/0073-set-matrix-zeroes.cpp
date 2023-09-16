class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        
        int matrix2[1000][1000];

        for(int i= 0; i<matrix.size(); i++)
        {
            for(int j = 0; j< matrix[i].size(); j++)
		    {
                matrix2[i][j]=matrix[i][j];
            }
        }



        for(int i = 0; i<matrix.size(); i++)
        {
            for(int j = 0; j< matrix[i].size(); j++)
            {
                if(matrix[i][j] == 0 && matrix2[i][j] == matrix[i][j])
                {
                    
                    for(int k=0; k<matrix.size(); k++)
                    {
                        if(matrix[k][j]!=0)
                        {
                            matrix[k][j] = 0;
                            
                        }
                        
                    }
                    for(int l=0; l<matrix[i].size(); l++)
                    {
                        if(matrix[i][l]!=0)
                        {
                            matrix[i][l] = 0;
                            
                        }
                    }
                }
	        }
        }
    }    
};
