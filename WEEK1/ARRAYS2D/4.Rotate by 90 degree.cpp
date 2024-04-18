Rotate by 90 degree
link:https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

run time:1ms
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }

        }
         for(int i=0;i<n;i++)
         reverse(matrix[i].begin(),matrix[i].end());
        
    }
};


run time:4ms

class Solution {
public:
    void rotate(vector<vector<int>>& matrix )
    {
        int n= matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0 ;i<n;i++)
        {
            int low=0 ,high = n-1;
            while(low<high)
            {
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
       
    }
};
