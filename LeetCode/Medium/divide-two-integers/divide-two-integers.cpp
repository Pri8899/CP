class Solution {
public:
    int divide(int dividend, int divisor) {
        int max=INT_MAX;
        int min=INT_MIN;
        long out=(long)dividend/divisor;
        if(max<out)
        {
            return max;
        }
        else if(min>out)
        {
            return min;
        }
        else
        {
            return (int)out;
        }
    }
};