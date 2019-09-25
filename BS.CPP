#include<iostream.h>

#include<conio.h>

class bsearch
{
int array[10];
int low,high,i,j,mid,n;
public:
	void input();
	void print();
	void sort();
	void check();
}obj;
	void bsearch::input()
			{
			cout<<"enter no of ele ";
			 cin>>n;
			for(i=1;i<=n;i++)
			 {
			 cin>>array[i];

			 }

			}
	void bsearch::print()
			{

				for(i=1;i<=n;i++)
				{
				   cout<<array[i]<<" ";
				}
				cout<<endl;
			}

		void bsearch::sort()
			{   int temp ;

				for(i=1;i<=n;i++)
				{
					for(j=i+1;j<=n;j++)
				{
					  if(array[i]>array[j])
					  {
					    temp = array[i];
					    array[i]=array[j];
					    array[j]=temp;
					  }
				}
				}


			}

		     void bsearch::check()
			{
			  low=1;
			  high=n;
			  int num;
			  cout<<"\nenter num to check ";
			  cin>>num;
			  while(low<=high)
			  {
			   mid=(low+high)/2;
			   if(num<array[mid])
			   {
			    high=mid-1;

			   }
			   else if(num<array[mid])
			   {
			    low=mid+1;

			   }
			    else
			  {
			   if(num==mid)
			  { cout<<"\nthe element exists ";
			   return;}
			   else
			   {   cout<<"\nthe element donot exists ";
			   return; }
			  }
			  }

			}

void main()
{
clrscr();

obj.input();
obj.sort();
obj.print();
obj.check();

getch();
}