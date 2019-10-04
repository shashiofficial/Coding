#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node* create(struct Node *head){
	struct Node *t1=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p;
	
	cout<<"Enter Data: "<<endl;
	cin>>t1->data;
	t1->next=NULL;
	
	if(head==NULL)
		head=t1;
	else{
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next=t1;
	}
	return head;
}

void display(struct Node *head){
	struct Node *p=head;
	cout<<"Display: "<<endl;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}

void ReverseDisplay(struct Node* p){
	if(p!=NULL){
		ReverseDisplay(p->next);
		cout<<p->data<<endl;
	}
	else
		return;
}


struct Node* ReverseList(struct Node *head){
	struct Node *p,*q,*r;
	p=head;
	q=NULL;
	r=NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	cout<<"List Reversed"<<endl;
	head=q;
	display(head);
	return head;
}

int main(){
	struct Node *head=NULL;
	while(1){
		cout<<"______________________________________________"<<endl;
		cout<<"Choose: "<<endl<<"1. Add an Element"<<endl<<"2. Display "<<endl<<"3. Reverse Display"<<endl;
	    cout<<"4. Reverse the List"<<endl<<"5. Exit"<<endl;
		cout<<"______________________________________________"<<endl;
		int ch,c=0,n=0;
		cin>>ch;
		switch(ch){
			case 1: head=create(head);
					break;
			case 2: display(head);
					break;
			case 3: cout<<"Reverse Display: "<<endl;
					ReverseDisplay(head);
					break;
			case 4: head=ReverseList(head);
					 break; 
			case 5: exit(1);
			default: cout<<"-----Invalid Option-----"<<endl;
		}
	}
}	
