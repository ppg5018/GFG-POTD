class Solution
{
  public:
    int minOperation(int n)
    {
        if(n==1) return 1;
        if(n%2==0) return minOperation(n/2)+1;
        
        else{
           return minOperation(n-1)+1;
      }

    }
};