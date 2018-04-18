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
    int delete(int to_Remove);
};
