#include <iostream>
#include <algorithm> 
//#include <vector>
#include <list>
using namespace std;
int main()
{
	long long n,m;
	cin>>n;
	char x;
	while(n)
	{
		cin>>m;
		char s,w;
		list<char>s1;
		list<char>s2;
		list<char>w1;
		list<char>w2;
		cin>>s;
		
		for(long long i=1;i<n;i++)
		{
			

		  	cin>>x;
		  	if(x<s)
		  	{
		  	s1.push_back(x);
			}
			else
			{
			s2.push_back(x);
			}
		}
		for(long long i=0;i<m;i++)
		{
			cin>>w;
			for(long long j=1;j<n;j++)
			{
				cin>>x;
				if(x<w)
			  	{
			  	w1.push_back(x);
				}
				else
				{
			    w2.push_back(x);
				}	
			}
			if(w!=s)
			{
				cout<<"No"<<endl; 
			}
			else
			{
				
				if(equal(s1.begin(),s1.end(),w1.begin())&&equal(s2.begin(),s2.end(),w2.begin()))
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl; 
				}
			}
		w1.clear();
		w2.clear();			
		}
		cin>>n;
		s1.clear();
		s2.clear();
		
	}


	return 0;
 } 
