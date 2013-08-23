#include<stdio.h>
#include<malloc.h>
void quicksort(int s[], int lower, int upper);
int split(int s[], int lower, int upper);

int main()
{
    int t,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int *s = (int*)malloc(n*sizeof(int));
        fflush(stdout);
        int  i;

        for(i=0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
//        printf ("sdas\n") ;

        quicksort(s, 0, n-1);

        // printf ( "Array after sorting:\n") ;

        // for ( i = 0 ; i < n ; i++ )
        //     printf ( "%d\n", s[i] ) ;


        int smallest;
            smallest = s[1]-s[0];
        for(i=0;i<n-1;i++)
        {
            int d = s[i+1]-s[i];
            if( d <= smallest)
            {
                smallest = d;
            }
        }
        printf("%d\n", smallest);

    }
    return 0;
}

void quicksort ( int a[ ], int lower, int upper )
{
    int i ;
    if ( upper > lower )
    {
        i = split ( a, lower, upper ) ;
        quicksort ( a, lower, i - 1 ) ;
        quicksort ( a, i + 1, upper ) ;
    }
}

int split ( int a[ ], int lower, int upper )
{
    int i, p, q, t ;

    p = lower + 1 ;
    q = upper ;
    i = a[lower] ;

    while ( q >= p )
    {
        while ( a[p] <= i )
            p++ ;

        while ( a[q] > i )
            q-- ;

        if ( q > p )
        {
            t = a[p] ;
            a[p] = a[q] ;
            a[q] = t ;
        }
    }

    t = a[lower] ;
    a[lower] = a[q] ;
    a[q] = t ;

    return q ;
}

