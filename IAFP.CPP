#include<iostream.h>
#include<conio.h>
#include<malloc.h>

	struct node              //defination of struture
		 {
		   int data;
		   node *prev;
		   node *next;
		 } ;







		 node *create()  //node creation
		 {  node * newn ;
		    newn = (node *) malloc(sizeof(node)) ;

			 newn->next=NULL;
			 newn->prev=NULL;
		    return(newn);
		 }

/*         ******           funtion declartions  *********                  */
		    void input();
		    void display();
		    void revdisplay();
		    void insert();
  node *head=NULL;
  node *start=NULL;
  node *end=NULL;
	void input()
	{
	 node *in,*trav,*t;


	 in=create();
	 cout<<"enter the data ";
	   cin>>in->data ;

		if(head==NULL)
		{
		 head=in;
		 start=in;
		}
	      else
	      in->prev=head;
	      head->next=in;
	      head=in;
	      end=head;

	}



void display()
	{     int a=0;
	  node * prnt;
	  prnt=start;
		while(prnt->next!=NULL)
		{
		 cout<<prnt->data<<endl;
		 prnt=prnt->next;
		 if(a>10){break;}a++;
		}
		cout<<prnt->data;
	}

	 void revdisplay()
	 {    int a=0;
		node * prnt;
		prnt=end;
		while(prnt->prev!=NULL)
		{
		 cout<<prnt->data<<endl;
		 prnt=prnt->prev;
		 if(a>10){break;}a++;
		}
		cout<<prnt->data;

	 }

	 void insert()
	 {
	  node *first;
	  first=create();
	  cout<<"\nenter the data ";
	  cin>>first->data;
	  start->prev=first;
	  first->next=start;
	  first->prev=NULL;
	  start=first;
	 }


void main()
{
int ele,i;
clrscr();
cout<<"enter the no of nodes you want ";
cin>>ele;
for(i=0;i<ele;i++)
	{
		  input();

	}

display();
insert();
display();
getch();
}