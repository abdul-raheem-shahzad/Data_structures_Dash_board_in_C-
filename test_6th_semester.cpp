#include<iostream>
using namespace std;
#define size 5
void array();
void Stack();
void Queue();
void De_queue();
void one_way();
void two_way();
void srch();
void sor();
int main()
{int input;
	cout<<"which operation do you want to perform?\n\n";
	cout<<"\tARRAY:PRESS(1)\n\tSTACK:PRESS(2)\n\tQUEUE:PRESS(3)\n\tDE-QUEUE:PRESS(4)\n\tONE-WAY LINK LIST(5)\n\tTWO-WAY LINK LIST(6)\n\tEXIT=0\nPLEASE ENTER YOUR CHOICE:";
	cin>>input;
while(input!=0)
{

	switch(input)
	{
	case 1:
	array();
	break;
	case 2:
	Stack();
	break;
	case 3:
	Queue();
	break;
	case 4:
	De_queue();
	break;
	case 5:
	one_way();
	break;
	case 6:
	two_way();
	break;
	case 7:
	sor();
	default:
	cout<<"\n !!!!ERROR!!!! \n\tinvalid number\n";
		 break;
	}
}
}
void array()
{
			int n=5,a[n],i,pos,in,no;
	cout<<"\n PRESS 1:TO INSERT AT ANY POSITION\n PRESS 2:TO DELETE AT ANY POSITION\n";
	cin>>in;

	if(in==1)
	{
		
	for(i=0;i<n;i++)
	{
		cout<<"number:";cin>>a[i];
	}
	cout<<"position to insert:";cin>>pos;
	if(pos<0||pos>n){
	cout<<"!!!invalid position!!!";}
	else
{
		cout<<"enter number you want to insert:";cin>>no;
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}no+=1;
	a[pos]=no;
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<"\n";
	}
	}
}
	else if(in==2)
	{
			for(i=1;i<=n;i++)
	{
		cout<<"number:";cin>>a[i];
	}
	cout<<"position to insert:";cin>>pos;
	if(pos<0||pos>n)
	cout<<"!!!invalid position!!!";
	for(int i=pos;i<=n-1;i++)
{
	a[i]=a[i+1];
}
n=n-1;
	for(int i=1;i<=n;i++)
	cout<<endl<<a[i];
	}
}
void Stack()
{
	
class stack
{
	public:
		int a[size],top;
		stack()
		{
			top=-1;
		}
		void insert()
		{
	
	if(top==size-1)
	cout<<endl<<"OVER_FLOW"<<endl;
	else
	{
		top+=1;
		cout<<"enter number in position:";cin>>a[top];
	}
}
		void del()
		{
	if(top==-1)
	cout<<endl<<"UNDER_FLOW"<<endl;
	else
	{
		cout<<endl<<"THe number to be deleted:"<<a[top];
		top--;
	}
}
		void print()
		{if(top==-1)
cout<<"Underflow";
else
{

	for(int i=top;i>=0;i--)
	{
		cout<<endl<<a[i];
	}
}
}
		
};
int i,n;
stack s1;
cout<<"\nYOU ARE ALOWED TO PUSH ONLY 5 VALUES\n";
cout<<"ENTERR HOW MUCH ELEMENTS YOU WANT TO PUSH:\n";
cin>>n;
for(i=0;i<n;i++)
{
	s1.insert();
}
cout<<"ENTER HOW MANY ELEMENTS YOU WANT TO POP\n";
cin>>n;
for(i=0;i<n;i++)
{
	s1.del();
}
s1.print();

}
void Queue()
{
	#define size 5
class queue
{
	int a[size],front,back;
	public:
		queue()
		{
			front=-1;
			back=-1;
		}
		void pushing()
		
{
	if(back>=size-1)
	{
		cout<<endl<<"Queue is full"<<endl;
	}
	else
	{
		front=0;
		++back;
		cout<<endl<<"Enter a number:";cin>>a[back];
	}
}
		void poping()
		{
	if(front==-1&&back==-1)
	cout<<endl<<"Queue is empty"<<endl;
	else if(front==back)
	{
		cout<<endl<<"Element to be poped:"<<frnt()<<endl;
		++front;
		front=-1;
		back=-1;
	}

	else
	{
		cout<<endl<<"Element to be poped:"<<frnt()<<endl;
		++front;
		
	}
}
		int frnt()
		{
	return a[front];
}
		void display()
		{
	if(front==-1&&back==-1)
	cout<<endl<<"Queue is empty"<<endl;
	else
	{
		for(int i=front;i<=back;i++)
		{
			cout<<endl<<a[i];
		}
	}
}
		int empty()
		{
	if(front==-1&&back==-1)
		return 1 ;
	else 
	return 0;
}
		int bk()
		{
			return back;
		}
};
queue q1;
int i,n;
cout<<"YOU ARE ALLOWED TO ENTER MAIXIMUN FIVE VALUES\n\n\t ENTER HOW MUCH NUMNER YOU WANT TO PUSH IN QUEUE:";
cin>>n;
for(i=0;i<n;i++)
{
	q1.pushing();
}
cout<<"\nENTER HOW MUCH NUMBERS YOU WANT TO POP FROM QUEUE:";cin>>n;
for(i=0;i<n;i++)
{
	q1.poping();
}
}
void De_queue()
{
	class dequeue
{
	int front,rear,a[size];
	public:
		void pushing()
		{
	int choice;
	cout<<"\n to push start:0\nto push rear:1\n";cin>>choice;
	if(choice==0)
	{
	if(front==0&&rear==size-1)
	cout<<"\n Owerflow\n";
	else if(front==-1&&rear==-1)
	{
		front++;
		rear=rear+1;
		cout<<"\n enter number:";cin>>a[front];
	}
	else if(front>0)
	{

	front--;	
	cout<<"\n enter number:";cin>>a[front];

		rear++;
	}
	else
	{
		cout<<"\n INPUT RESTRICTED DE-QUEUE\n";
	}
	}
	else if(choice==1)
	{
	if(front==0&&rear==size-1)
	cout<<"\n Owerflow\n";
	else if(front==-1&&rear==-1)
	{
	front++;
	rear=rear+1;
	cout<<"\n Emter a number:";cin>>a[rear];	
	}
	else if(rear<size-1)
	{
		rear+=1;
		cout<<"\nenter number:";cin>>a[rear];
	}
	else 
	cout<<"\n deck is full";
	}
}
		void poping()
		{
	int choice;
	cout<<"\n to pop start:0\n to pop rear:1\n";cin>>choice;
	if(choice==0)
	{
		if(front==-1&&rear==1)
		cout<<"\n Underflow\n";
		else if(front==rear)
		{
			cout<<"\nNumber to poped:";cout<<a[front];
			front=rear=-1;
			}	
			else {
				cout<<"\nNumber to popoed:"<<a[front];
				++front;
			}
	}
	else if(choice==1)
	{
			if(front==-1&&rear==1)
		cout<<"\n Underflow\n";
		else if(front==rear)
		{
			cout<<"\n number to poped :"<<a[rear];
			front=rear=-1;
		}
			else
			{
				cout<<"\nnumber to be poped :"<<a[rear];
				--rear;
			}
		
	}
}
			 dequeue(){
			 	front=-1,rear=-1;
			 }
		void dis()
		{
	if(front==-1&&rear==-1)
	cout<<"\n Underflow\n";
	else
	{
		for(int i=front;i<=rear;i++)
		cout<<endl<<a[i]<<endl;
	}
}

};
	dequeue dq1;
	int i,n;
	cout<<"\n YOU ARE ALLOWED TO ENTER MAXIMUM 5 VALUES\n";
	cout<<"\n ENTER HOW MANY VALUES YOU WANT TO ENTER IN DE_QUEUE:";cin>>n;
	for(i=0;i<n;i++)
	{
		dq1.pushing();
	}
		cout<<"\n ENTER HOW MANY VALUES YOU WANT TO DELETE FROM DE_QUEUE:";cin>>n;
	for(i=0;i<n;i++)
	{
		dq1.poping();
	}
}
void two_way()
{
	class way_2{
		public:
	
	class node
{
	public:
	int data;
	node *next,*prev;	
};
node *head=NULL;
void insert()
{
	node *trav,*pre_trav,*fresh_node;
	int no;
	cout<<"TO STOP PROCESS PRESS -1\n\n";
	cout<<"enter data:";cin>>no;
	while(no!=-1)
  {	
	if(head==NULL)
	{
	head=fresh_node;
	fresh_node=new node;
	fresh_node->data=no;
	head=fresh_node;
	trav=fresh_node;
	fresh_node->prev=NULL;
	}
	else
	{
		pre_trav=trav;
		fresh_node=new node;
		fresh_node->data=no;
		trav=fresh_node;
		trav->prev=pre_trav;
		pre_trav->next=trav;	
	}
	cout<<"\nenter data:";cin>>no;
  }
  trav->next=NULL;
}
void insert_last()
{
	cout<<"\n inserting node at end\n";int no;
	cout<<"enter data:";cin>>no;
	node *trav,*last_node;
	trav=head;
	last_node=new node;
	last_node->data=no;
	while(trav->next!=NULL)
	{
		trav=trav->next;
	}last_node->prev=trav;
	trav->next=last_node;
	last_node->next=NULL;
}
void insert_front()
{
	node *trav,*front_node;int no;
	cout<<"\n inserting node at front\n";
	cout<<"enter number:";cin>>no;
	front_node=new node;
	front_node->data=no;
	trav=head;
	trav->prev=front_node;
	front_node->next=trav;
	front_node->prev=NULL;
	head=front_node;
}
insert_pos()
{
	node *trav,*pos_node,*pre_trav;
	int no,pos;
	pos-=1;
	cout<<"\nto insert node at any position\n";
	cout<<"\nenter data:";cin>>no;
	cout<<"\nenter position:";cin>>pos;
	pos_node=new node;
	pos_node->data=no;
	trav=head;
	for(int i=1;i<pos&&trav->next!=NULL;i++)
	{
		pre_trav=trav;
		trav=trav->next;
	}pos_node->next=trav;
	trav->prev=pos_node;
	pos_node->prev=pre_trav;
	pre_trav->next=pos_node;
}
void del_last()
{
	node *trav,*pre_trav;
	trav=head;
	while(trav->next!=NULL)
	{
		pre_trav=trav;
		trav=trav->next;
	}pre_trav->next=NULL;
}
void del_start()
{
	node *trav;
	trav=head;
	trav=trav->next;
	trav->prev=NULL;
	head=trav;
}
void del_pos()
{
	node *trav,*pre_trav,*latest;int pos;
	cout<<"enter positon in which you want to delete NODE:";cin>>pos;
	trav=head;
	for(int i=1;i<pos&&trav->next!=NULL;i++)
	{
		pre_trav=trav;
		trav=trav->next;
	}
	trav=trav->next;
	pre_trav->next=trav;
	trav->prev=pre_trav;
}
void print()
{
	node *trav;
	trav=head;
	cout<<"\n Head:"<<head<<endl;
	while(trav!=NULL)
	{
		cout<<"\ndata:"<<trav->data<<endl;
		cout<<"\n prev:"<<trav->prev<<endl;
		cout<<"\n Next:"<<trav->next<<endl<<endl<<endl;
		trav=trav->next;
	}
}};
 way_2 w2;
 w2.insert();
 int n;
cout<<"\n\nTHERE ARE VARIOUS OPERTIONS IN TWO-WAY LINKED LIST WHICH OPERATION DO YOU WANT TO PERFORM\n\t INSERT FROM FRONT:1\n\t INSERT FROM BACK:2\n\t INSERT FROM ANY POSITION:3\n\tDELETE FROM FRONT:4\n\tDELETE FROM END:5\n\tDELETE FROM ANY POSITION:6\n";cin>>n;
	if(n==1)
	w2.insert_front();
	else if(n==2)
	 w2.insert_last();
	 else if(n==3)
	 w2.insert_pos();
	 else if(n==4)
	 w2.del_last();
	 else if(n==5)
	 w2.del_start();
	 else if(n==6)
	 w2.del_pos();
	 w2.print();

}
void one_way()
{
	class way_1
	{
		public:
		class node
{
	public:
		int data;node *next;
};
node *head=NULL;
node* create_node()
{
	return new node;
}
void insert()
{
	node *new_node,*traverse;int in;
	cout<<"to STOP:-1";cout<<endl<<"enter number:";cin>>in;
	while(in!=-1)
	{
	new_node=create_node();
	new_node->data=in;
	new_node->next=NULL;
	if(head==NULL)
	head=new_node;
	else
	{
		traverse=head;
		while(traverse->next!=NULL)
		{traverse=traverse->next;}
	traverse->next=new_node;
	}cout<<endl<<"enter number:";cin>>in;
}
}

void insert_front()
{
	node *front_node;int in;
	cout<<endl<<"to stop:-1"<<endl;
		cout<<"enter number in front:";cin>>in;
	while(in!=-1)
	{
	front_node=create_node();
	front_node->data=in;
	front_node->next=head;
	head=front_node;
	cout<<"enter number in front:";cin>>in;}
}
void insert_last()
{
	node *end_node,*traverse;
	int in;
	cout<<"enter number to insert in last:";cin>>in;
	end_node=create_node();
	end_node->data=in;
	end_node->next=NULL;
	traverse=head;
		traverse=head;
		while(traverse->next!=NULL)
		{traverse=traverse->next;}
	traverse->next=end_node;
}
void insert_pos()
{
	node *pos_node,*traverse,*save;
	int in,pos;
	cout<<"enter number you want to enter:";cin>>in;
	cout<<"enter position:";cin>>pos;
	pos-=1;
	pos_node=create_node();
	pos_node->data=in;
	traverse=head;
	for(int i=0;i<pos-1&&traverse->next!=NULL;i++)
	{
		traverse=traverse->next;
	}
	pos_node->next=traverse->next;
	traverse->next=pos_node;
}
void del_start()
{
	node *traverse;
	traverse=head;
	traverse=traverse->next;
	head=traverse;
	cout<<endl<<"after deletion"<<endl;
}
void del_end()
{
	node *traverse,*pre_traverse;
	traverse=head;
	while(traverse->next!=NULL)
	{pre_traverse=traverse;
	traverse=traverse->next;
	cout<<endl<<"after deletion"<<endl;
	}
	pre_traverse->next=NULL;
}
void del_pos()
{
	node *traverse,*pre_traverse;
	int pos;
	cout<<"enter position in which you want to delete:";cin>>pos;
	traverse=head;
	for(int i=0;i<pos-1;i++)
	{
		pre_traverse=traverse;
		traverse=traverse->next;
	}pre_traverse->next=traverse->next;
	cout<<endl<<"after deletion"<<endl;
}
void print()
{
	node *traverse;
	traverse=head;
	while(traverse!=NULL)
	{cout<<"data:"<<traverse->data<<endl;
		cout<<"address:"<<traverse->next<<endl<<endl;
		traverse=traverse->next;	
		}	
}};
way_1 w1;
w1.insert();
int n;
cout<<"\n\nTHERE ARE VARIOUS OPERTIONS IN ONE-WAY LINKED LIST WHICH OPERATION DO YOU WANT TO PERFORM\n\t INSERT FROM FRONT:1\n\t INSERT FROM BACK:2\n\t INSERT FROM ANY POSITION:3\n\tDELETE FROM FRONT:4\n\tDELETE FROM END:5\n\tDELETE FROM ANY POSITION:6\n";cin>>n;
	if(n==1)
	w1.insert_front();
	else if(n==2)
	 w1.insert_last();
	 else if(n==3)
	 w1.insert_pos();
	 else if(n==4)
	 w1.del_start();
	 else if(n==5)
	 w1.del_end();
	 else if(n==6)
	 w1.del_pos();
	 w1.print();	
}
void sor()
{int n,no,i,a[100],j,temp;
	cout<<"\n Bubble sort:press(1)\n";cin>>n;
	if(n==1)
	{
		cout<<"Enter number how much numbers you want to enter in array:";cin>>no;
		for(i=0;i<n;i++)
		{
			cout<<"enter number:";cin>>a[i];
		}
			for(i=0;i<n;i++)
	{
		j=i+1;
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	}
}

