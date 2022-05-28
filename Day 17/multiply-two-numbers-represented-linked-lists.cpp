// link: https://www.geeksforgeeks.org/multiply-two-numbers-represented-linked-lists/

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

void multiplyList(node* &head, node* &head1){
	node* temp=head;
	node* temp1=head1;
	vector<int> v;
	vector<int> v1;
	while(temp!=NULL){
		v.push_back(temp->data);
		temp=temp->next;
	}
	while(temp1!=NULL){
		v1.push_back(temp1->data);
		temp1=temp1->next;
	}
	int sum=0, sum1=0;
	for(int i=0;i<v.size();i++){
		sum=sum+v[i]*pow(10, v.size()-i-1);
	}
	for(int i=0;i<v1.size();i++){
		sum1=sum1+v1[i]*pow(10, v1.size()-1-i);
	}
	cout<<sum*sum1;
}

int main(){
	node* head=NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	node* head1=NULL;
	insertAtTail(head1, 2);
	insertAtTail(head1, 4);
	multiplyList(head, head1);
	return 0;
}
