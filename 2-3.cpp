#include<iostream>
using namespace std;

class Node{
public:
	int value;
	Node *nextNode;
	Node(int x=0):value(x){
		nextNode = NULL;
	}
};

class List{
public:
	Node *head;
	List(){
		head = NULL;
	}
	void create(){
		cout <<"�봴������������0��ʾ���������"<<endl;
		int x;
		Node *node,*p;
		cin >>x;
		head = new Node(x);
		p = head;
		cin >>x;
		while(x){
			node = new Node(x);
			p->nextNode = node;
			p = p->nextNode;
			cin >>x;
			}
		
	}
	void print(){
		Node *p = this->head;
		while(p){
			cout <<p->value<<"\t";
			p = p->nextNode;
		}
		cout <<endl;
	}
	void upDown(){
		if(!head){
			cout <<"��������û�н��"<<endl;
			return;
		}
		Node *p = head;
		Node *h = head;
		Node *tmp;
		while(p->nextNode){
			tmp = p->nextNode->nextNode;
			p->nextNode->nextNode = h;
			h = p->nextNode;
			p->nextNode = tmp;
		}
		head = h;
	}
};

int main(){
	List list;
	list.create();
	list.print();
	cout <<"������"<<endl;
	list.upDown();
	list.print();
	return 0;
}




