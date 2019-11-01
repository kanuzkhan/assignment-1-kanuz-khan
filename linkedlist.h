#include<iostream>
using namespace std;
struct node
{
	double value;
	node *next;
};

class list
{
private:
	node * head, *tail;
public:
	list();

	void createnode(double a);
	void display_list();
    void insert_start(double a);
   	void insert_last(double a);
   	void insert_position(int b, double a);
	void delete_first();
	void delete_last();
    void delete_position(int b);

};


	

		