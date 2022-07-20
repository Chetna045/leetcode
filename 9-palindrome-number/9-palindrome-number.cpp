class Solution {
public:
    bool isPalindrome(int x){
        int n=x;
        long int rev=0;
        if(x<0)
            return false;
        while(n!=0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        if(rev==x)
            return true ;
        else
            return false;
        
    }
};