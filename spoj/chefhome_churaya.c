#include<stdio.h>
#include<stdlib.h>
func(const void *p, const void *q)
{
const int *p1=p;
const int *p2=q;
    if(*p1>*p2)
    return(1);
    else return(0);
}
int scan()
{
char c;int temp=0,m=1;
    c=getchar_unlocked();
        if(c=='-')
        {
        c=getchar_unlocked();
        m=-1;
        }
        while(c>='0')
        {
        temp=(temp<<3)+(temp<<1)+(c-'0')*m;
        c=getchar_unlocked();
        }

    return(temp);
}
int main()
{
int t,hf,i,n,x[1008],y[1008];
long long int rx,ry;
t=scan();
    while(t--)
    {   n=scan();
         for(i=0;i<n;i++)
        {x[i]=scan();y[i]=scan();}
        if(n%2)
        printf("1\n");

        else
        {
         
       
        
        qsort(x,n,sizeof(int),func);
        qsort(y,n,sizeof(int),func);
        
          
            hf=n/2;
            rx=x[hf]-x[hf-1]+1;
            ry=y[hf]-y[hf-1]+1;
            printf("%lld\n",rx*ry);
        
     }   
    }
    return(0);
}