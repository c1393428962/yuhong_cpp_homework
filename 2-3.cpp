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
		cout <<"请创建链表：（输入0表示输入结束）"<<endl;
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
			cout <<"该链表中没有结点"<<endl;
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
	cout <<"链表倒序"<<endl;
	list.upDown();
	list.print();
	return 0;
}




