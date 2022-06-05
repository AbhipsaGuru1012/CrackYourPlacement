// link: https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/

#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data=val;
			next=NULL;
		}
};

void insertAtTail(node* &head, int val){
	node* n=new node(val);
	
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=n;
	
	
}

void evenOddList(node* &head){
	node* temp=head;
	node* temp1=head;
	vector<int> v;
	vector<int> v1;
	while(temp!=NULL){
		if(temp->data % 2==0){
		
			v.push_back(temp->data);
		}else{
			v1.push_back(temp->data);
		}
		temp=temp->next;
	}
	int j=0,i=0;
	while(temp1!=NULL){
		if(i<v.size()){
			temp1->data=v[i];
			i++;
			temp1=temp1->next;
		}else{
			temp1->data=v1[j];
			j++;
			temp1=temp1->next;
		}
	}
	
	node* temp3=head;
	while(temp3!=NULL){
		cout<<temp3->data<<" ";
		temp3=temp3->next;
	}
}

int main(){
	node* head=NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	evenOddList(head);
	return 0;
}
 