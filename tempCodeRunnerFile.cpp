int countSetBits(int n)
    {
        if(n==1){
            return 1;
        }
        int ct=0,r=n;
        while(r){
            r=r& r-1;
            ct++;
        }
        return ct + countSetBits(n-1);
    }
