#include"linkedlist.h"
using namespace std;
int main()
{
	list object;

	object.createnode(25.00);
	object.createnode(50.00);
	object.createnode(90.00);
	object.createnode(40.00);
	object.createnode(55.00);


	object.display_list();
	cout << endl << endl;


	object.insert_last(15.00);
	object.display_list();
	cout << endl << endl;


	object.insert_start(10.00);
	object.display_list();
	cout << endl << endl;


	object.delete_first();
	object.display_list();
	cout << endl << endl;


	object.delete_last();
	object.display_list();
	cout << endl << endl;


	object.delete_position(4);
	object.display_list();
	cout << endl << endl;
	
	
	object.insert_position(3, 44.72);
	object.display_list();
	cout << endl << endl;
    return 0;
}
