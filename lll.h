#include <iostream>
using namespace std;

struct node(){
  int data;
  node * next;
};

class lll(){
  public:
    lll();
    ~lll();
    
    int insert(int to_Add);
    int remove(int to_Remove);
    void display();
  
  private:
    node * head;
    int insert(node*&head, int to_Add);
    int remove(node*&head, int to_Remove);
    void display(node * head);
};
