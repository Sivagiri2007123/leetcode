bool isPalindrome(int x) {
    long sum=0;
    long n=x;
    if(x<0)
    return false;
    while(x>0)
    {
        long r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    if(sum==n)
    return true;

    return false;
}