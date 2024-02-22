bool isPalindrome(int x){
    int t = x;
    unsigned int sum=0;
    int d=0;

    while(x>0)
    {
        d = x%10;
        sum = (sum*10) + d;
        x = x/10;
    }
    if(sum == t)
    return true;
    else
    return false;
}
