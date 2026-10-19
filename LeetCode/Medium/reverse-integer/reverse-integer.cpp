class Solution {
public:
    int reverse(int x) {
        int max=INT_MAX;
        int min=INT_MIN;
        long rev=0;
        while(x!=0)
        {
            rev=rev*10+x%10;
            x/=10;
        }
        if(rev>max)
        {
            return 0;
        }
        else if(rev<min)
        {
            return 0;
        }
        else
        {
            return (int)rev;
        }

    }
};