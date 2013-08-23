#include<algorithm>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{	
	int s;
	cin>>s;
	int *values;
	values = new int[s];
	int i;
	for(i=0;i<s;i++)
	{
		cin>>values[i];
	}
	int *arr1,*arr2;
	arr1 = new int[1000000];
	arr2 = new int[1000000];
	int p,q,r;
	int cnt1=0,cnt2=0;
	for(p=0;p<s;p++)
		for(q=0;q<s;q++)
			for(r=0;r<s;r++)
				{
					arr1[cnt1]=(values[p]*values[q])+values[r];
					arr2[cnt1++]=(values[p])*(values[q]+values[r]);
				}
	std::sort(arr1,arr1+cnt1);
	std::sort(arr2,arr2+cnt1);
	cout<<"cnt val="<<cnt1<<endl;
	cout<<"array values sorted"<<endl;
	for(i=0;i<cnt1;i++){
		cout<<arr1[i]<<"\t\t"<<arr2[i]<<endl;
	}
	int ans = 0;
	int j=0;
	i=0;
	while(i<cnt1&&j<cnt1){
		if(arr1[i]==arr2[j]){
			ans++;
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;

		}
		else if(arr1[i]>arr2[j]){
			j++;
		}

	}				


	cout<<ans;
	return 0;
}