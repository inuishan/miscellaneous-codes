#include <stdio.h>
#include <malloc.h>
int split ( long*, int, int );
void quicksort ( long *, int, int );
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long *p = (long *)malloc(n*sizeof(long));
		fflush(stdout);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&p[i]);
		}
		//printf("%s\n", "Read all inputs");
		//TODO: routine for quicksort
		quicksort ( p, 0, n-1 ) ;
		//printf("%s\n", "QS xecuted");
		// for(i=0;i<n;i++)
		// 	printf("%d ",p[i]);
		int ans = p[1]-p[0];
		int j;
		for(i=2,j=1;i<n;i++,j++)
		{
			int diff = p[i]-p[j];
			if(diff<ans)
				ans=diff;
		}
		printf("%d\n",ans );
		free(p);

	}
	return 0;
}


int split ( long*, int, int ) ;
void quicksort ( long a[ ], int lower, int upper )
{
	int i ;
	if ( upper > lower )
	{
		i = split ( a, lower, upper ) ;
		quicksort ( a, lower, i - 1 ) ;
		quicksort ( a, i + 1, upper ) ;
	}
}

int split ( long a[ ], int lower, int upper )
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