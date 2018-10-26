#include <iostream>
using namespace std;

class Node
{
	public:
		Node();
		Node(int data);
		Node(Node * temp);
		~Node();
		Node*& getNext();
		bool checkData(int data);
		void display();

	protected:
		int data;
		Node * next;
};

class LLL
{
	public:
		LLL();
		~LLL();
		int insert(int data);
		int remove(int data);
		void findingMiddle();
		void reverse();
		void display();

	protected:
		Node * head;
		int insert(int data, Node *& head);
		int remove(int data, Node *& head);
		Node * reverse(Node *& head);
		void display(Node * head);
};
