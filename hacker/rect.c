#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int l,b,a,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&l);
    // printf("l=%d\n",l );
    scanf("%d",&b);
    // printf("b=%d\n",b );
    int min,max;
    min = l;
    min = l>b?b:l;
    // printf("%d\n",min );
    //l>b?max=l:min=b;
        for(a=min;a>=1;a--){
            float m = ((float)(l*b))/(a*a);
            // printf("m=%f\n",m);
            // printf("second%f\n",m-(int)m);
            if((m-(int)m)==0)
            {
                printf("%d\n",(int)m);
                break;
            }
    }
   
}
 return 0;
}
