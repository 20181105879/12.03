#include <iostream>
using namespace std;
int a[10000000];
int b[10000000];
int c[10000000];
int d[10000000];
int main()
{
	int n,m;
	cin>>n;
	int q,w;
	for(int i=0;i<n;i++)
	{
		cin>>q>>w;
		a[w]+=q;
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>q>>w;
		b[w]+=q;
	}
	for(int i=0;i<11000;i++)
	{
		
		if(a[i]!=0)
		{
			for(int j=0;j<11000;j++)
			{
				if(b[j]!=0)
				{
					c[i+j]+=(a[i]*b[j]);
				}
			}
		}
		
	}
	int count=0;
	for(int i=10005;i>=0;i--)
	{
		if(c[i]!=0)
		{
			if(count!=0)
			{
				cout<<" "<<c[i]<<" "<<i;
			}
			else
			{
				cout<<c[i]<<" "<<i;
			}
			count++;
		}
	}
	if(count==0)
	{
		cout<<0<<" "<<0; 
	}
	cout<<endl;
	for(int i=0;i<10005;i++)
	{
		if(a[i]!=0||b[i]!=0)
		{
			d[i]=a[i]+b[i];
		}
	}
	count=0;
	for(int i=10005;i>=0;i--)
	{
		if(d[i]!=0)
		{
			if(count!=0)
			{
				cout<<" "<<d[i]<<" "<<i;
			}
			else
			{
				cout<<d[i]<<" "<<i;
			}
			count++;
		}
	}
	if(count==0)
	{
		cout<<0<<" "<<0; 
	}

	return 0;
}
