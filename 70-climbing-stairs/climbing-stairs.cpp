class Solution {
public:
    static int r(int n)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        int x=r(n-1)+r(n-2);
        return x;
    }
    int climbStairs(int n)
    {
        int ways=0;
        //return r(n);
        if(n==1) return 1;
        if(n==2) return 2;
        vector<int>way(45);
        way[0]=1;
        way[1]=2;
        
        for(int i=2;i<n;i++)
        {
            //ways=ways+climbStairs(i-1)+climbStairs(i-2);
            way[i]=way[i-1]+way[i-2];
        }
        return way[n-1];
    }
};