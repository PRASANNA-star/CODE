int uniquePaths(int m, int n){
   long int b=1;
    for(int i=1;i<=m-1;i++)
    {
         b*=n-1+i;
        b/=i;
     }
    return b;
}
