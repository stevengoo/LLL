#include "LLL.h"

int main()
{
	LLL list;
	list.insert(5);
	list.insert(6);
	list.insert(7);
	//list.remove(6);
	//list.remove(5);
	list.findingMiddle();
	list.reverse();
	//list.remove(7);
	list.display();
	return 0;
}
