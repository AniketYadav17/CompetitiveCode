//PROGRAM:

#include<iostream>
using namespace std;

class SEComp
{
	int n,i,j,k,high,low,max,maxm;
	int marks[20];
	float avg_marks=0;
	static int size;
	
	public:
	void strength()
	{
		cout<<"Enter the number of students in class :";
		cin>>n;
	}
	
	void input()
	{
		cout<<"Enter marks roll numberwise [MAX MARKS=100, PUT -1 IF ABSENT] : "<<endl;		
		for(i=0;i<n;i++)
		{
			cin>>marks[i];
			while(marks[i]>100)
			{
				cout<<"please enter correct marks";
				cin>>marks[i];
			}
		}
	}
	void average()
	{
		j=0;
		for(i=0;i<n;i++)
		{
			if(marks[i]!=(-1))
			{
				avg_marks=avg_marks+marks[i];
				j++;
			}
		}
		avg_marks=avg_marks/j;
		cout<<"\nAverage marks scored are : "<<avg_marks;
	}
	void highest()
	{
		high=marks[0];
		for(i=0;i<n;i++)
		{
			if(marks[i]==-1)
			{
			}
			else if(high<marks[i])
			{
				high=marks[i];
			}	
		}
		cout<<"\nHighest marks scored are "<<high<<" by roll no. ";
		for(i=0;i<n;i++)
		{
			if(marks[i]==high)
			{
				cout<<i+1<<"\t";
			}
		}	
	}
	void lowest()
	{
		low=marks[0];
		for(i=0;i<n;i++)
		{
			if(marks[i]==-1)
			{
			}
			else if(low>marks[i] && marks[i]!=-1)
			{
				low=marks[i];
			}
		}
		cout<<"\nLowest marks scored are "<<low<<" by roll no. ";
		for(i=0;i<n;i++)
		{
			if(marks[i]==low)
			{
				cout<<i+1<<"\t";
			}
		}		
	}
	void mode()
	{
		max=0;
		for(i=0;i<n;i++)
		{
			k=1;
			for(j=0;j<n;j++)
			{
				if(marks[j]!=-1)
				{
					if(marks[i]==marks[j])
					{
						k++;
						if(k>=max)
						{
							max=k;
							maxm=marks[j];
						}
					}
				}
			}
		}
		cout<<"\nMost of the students scored :"<<maxm;
	}
	void absent()
	{
		cout<<"\nlist of absent students : ";
		for(i=0;i<n;i++)
		{
			if(marks[i]==-1)
			{
				cout<<"Roll No."<<i+1<<"\n";
			}
		}
		
	}		
};

int main()
{	
	int s,a;
	SEComp S;
	S.strength();
	S.input();
	a=1;
	while(a>=1)
		{
			cout<<"\nWhat do you want to check??"<<endl;
			
			cout<<"1.Average marks\n2.Highest marks\n3.Lowest marks\n4.Marks scored by most students\n5.List of absent students\n0.EXIT\n";
			cin>>s;
			switch(s)
			{
				case 1: S.average();
					break;
				case 2: S.highest();
					break;
				case 3: S.lowest();
					break;
				case 4: S.mode();
					break;
				case 5: S.absent();
					break;
				default:cout<<"WRONG INPUT";
			}
			cout<<"\nDo you want to check anything else?[yes=1,no=0] : ";
			cin>>a;
		}
		return 0;
}
