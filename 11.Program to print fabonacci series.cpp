#include<iostream>
using namespace std;
main()
{
	int f,s,n,i;
	int sum=1;
	cout<<"Enter 1st number : ";
	cin>>f;
	cout<<"Enter 2nd number : ";
	cin>>s;
	cout<<"Enter the limit of series : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
		cout<<sum<<"\t";
		}
		else
		{
		sum=0;
		sum=f+s;
		f=s;
		s=sum;
		cout<<sum<<"\t";
		}
	}
}