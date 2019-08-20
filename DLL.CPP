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
	void del();

			cll()
			{
			 node *start=NULL;

			}

			node* create()
			{
			node *nnd;
			nnd=(node *)malloc(sizeof(node));
			return nnd;
			}

}obj;//class ends


			void cll::del()
			{
			 node *del;

			 node *ptr;
			 cout<<"the data of node you want to delete ";
			 int dta;
			 cin>>dta;
			  ptr=obj.start;
			  while(ptr->next!=NULL&&ptr->data!=dta)
				{  del=ptr;

				 ptr=ptr->next;
			 }
			     if(ptr==last)
			     {
			     //node *t=ptr;
			     del->next=NULL;

			     free(ptr);
			     // t->next=NULL;}
			     }
			      else if(ptr==start)
			     {   node *t=start;

			       start=start->next;
				free(t);
			     }
			     else
			     {
			       node *t=ptr;
			       ptr=ptr->next;
			       del->next=ptr;
			       free(t);

			     }

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
cout<<"how many nodes you want to delete ";
int no=0;
cin>>no;
for(i=0;i<no;i++)
	{
	 obj.del();
	}
cout<<endl;
obj.display();
getch();
}