Search in a row-column sorted Matrix
link:https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=n-1;
        
        while(i<n && j>=0)
        {
            if(x==matrix[i][j])
            return 1;
            
            else if(x>matrix[i][j])
            {
                i++;
            }
            
            else 
            {
                j--;
            }
            
            
        }
        
        return 0;
    }
};
