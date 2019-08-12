
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
	void cir();
	void merge();

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

}obj,obj1;//class ends


			void cll::merge()
			{
			 obj.last->next=obj1.start;
			 cout<<"the merged list is \n"
			 node *ptr;
			  ptr=obj.start;
			  while(ptr!=NULL)
				{
				cout<<ptr->data;
				 ptr=ptr->next;
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
int ele,ele1;
clrscr();
cout<<"enter the no of ele you want ";
cin>>ele;
for(int i=0;i<ele;i++)
{
obj.input();

}
cout<<endl;
obj.display();
cout<<"enter the no of element you want 2"<<endl;
cin>>ele1;
cout<<endl;
for(int j=0;j<ele1;j++)
{
obj1.input();

}
obj1.display();
cout<<endl;
obj.merge();
getch();
}