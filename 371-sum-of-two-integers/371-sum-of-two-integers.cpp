class Solution {
public:
    int getSum(int a, int b) {
        /*if(a==0)
            return b;
        if(b==0)
            return a;
        return log(exp(a)*exp(b));*/
        while(b)
        {
            unsigned c=a&b;
            a^=b;
            b=c<<1;
        }
        return a;
    }
};