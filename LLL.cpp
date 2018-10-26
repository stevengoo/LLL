#include "LLL.h"

Node::Node(){ data= 0; next = NULL;}
Node::Node(int data){this->data = data; next = NULL;}
Node::Node(Node * temp)
{
	data = temp->data;
	next = temp->next;
}
Node::~Node(){data=0; next = NULL;}
Node*& Node::getNext(){return next;}
bool Node::checkData(int data)
{
	if(this->data == data)
		return true;
	return false;
}
void Node::display(){ cout << data << endl;}

LLL::LLL(){head = NULL;}
LLL::~LLL()
{
	while(head)
	{
		Node * temp = head->getNext();
		delete head;
		head = temp;
	}
	head = NULL;
}
int LLL::insert(int data)
{
	return insert(data, head);
}

int LLL::insert(int data, Node *& head)
{
	if(head == NULL)
	{
		Node * temp = new Node(data);
		head = temp;
		return 1;
	}
	insert(data, head->getNext());
}

int LLL::remove(int data)
{
	return remove(data, head);
}

int LLL::remove(int data, Node *& head)
{
	if(head == NULL)
		return 0;

	if(head->checkData(data))
	{
		Node * temp = head->getNext();
		delete head;
		head = temp;
		return 1;
	}
	remove(data, head->getNext());

}

void LLL::display(){display(head);}

void LLL::display(Node* head)
{
	if(head == NULL)
		return;
	head->display();
	display(head->getNext());
}

void LLL::findingMiddle()
{
	int length = 0;
	Node * temp = head;
	Node * middle = head;
	while(temp)
	{
		length++;
		if(length%2 == 0)
		{
			middle = middle->getNext();
		}
		temp= temp->getNext();
	}
	cout << "The length of list is: " << length << ". The value of middle is: ";
	middle->display();
}
void LLL::reverse()
{
	reverse(head);
}

Node* LLL::reverse(Node *& head)
{
	if(head->getNext() == NULL)
	{
		this->head = head;
		return head;
	}

	Node * temp = reverse(head->getNext());
	temp -> getNext() = head;
	return head;
}
