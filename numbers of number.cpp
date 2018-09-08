int num(int a[], int n, int k)
{
   int i,s,m; 
   s=0;
   for(i=0;i<n;i++)
    {
       while(a[i]!=0)
       {
         m=a[i]%10;
         if(m==k)
         {
           s++;
         }
         a[i]=a[i]/10;
        }
    }
    return s;
}
