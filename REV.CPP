
#include<iostream.h>
#include<conio.h>
#include<malloc.h>

class cll

{ 	 struct node
		{
			int data;
			node *next;

		};

			node *start;
			node *last;

public:
	void input();
	void display();
	void reverse();
	void del();
			   struct node *t;

			node* create()
			{
			node *nnd;
			nnd=(node *)malloc(sizeof(node));
			return nnd;
			}

}obj;//class ends
		       cll::	node *start=NULL;
			void cll::reverse()
			{
			 node *current,*next,*prev;

			 current =start;
			 prev=NULL;


			 while(current!=NULL)
			  {
			    next=current->next;
			    current->next=prev;
			    prev=current;
			    current=next;
			  }

			    start=prev;
				int a=0;
			  node *rev;
			  rev=start;
			 while(rev!=NULL)
			  {
			    cout<<rev->data;
			    rev=rev->next;
			    if(a>10){break;}
			    a++;

			  }

			}

			void cll::del()
			{
			 node *del;

			 node *ptr;
			  ptr=obj.start;
			  while(ptr->next!=NULL)
				{  del=ptr;

				 ptr=ptr->next;
			 }
			      //free(ptr);
			      del->next=NULL;
			      free(ptr);
			 }

			void cll:: input()
			{
			 node *in;  node *trav;
			 in =create();
			 last=in;
			 cout<<"enter the data  ";
			 cin>>in->data;
			 in->next=NULL;
			 if(start==NULL)
			 {  start=in;
				}

			 else
			 {
			   trav=start;
			  while(trav->next!=NULL)
				 {
				  trav=trav->next;
				 }
			   trav->next=in;

			 }

			 }




			void cll:: display()
			{
			 node *prnt;
			 prnt=start;
			 while(prnt->next!=NULL)
			  {
			   cout<<prnt->data;
			   prnt=prnt->next;
			  }
			  cout<<prnt->data<<endl;


			  }


void main()
{
int ele;
clrscr();
cout<<"enter the no of ele you want ";
cin>>ele;
for(int i=0;i<ele;i++)
{
obj.input();

}
cout<<endl;
obj.display();
obj.reverse();

getch();
}