void sortColors(int* nums, int n){
    int cz=0,co=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            cz++;
}
        if(nums[i]==1)
        {
co++;
        }
}

    
    for(int i=0;i<cz;i++)
    {
       nums[i]=0;
    }
    for(int i=cz;i<cz+co;i++)
    {
nums[i]=1;
    }
    for(int i=cz+co;i<n;i++)
    {
      nums[i]=2;
    }
    
}
