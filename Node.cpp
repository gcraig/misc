#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

/*
 * Test harness to smoke test the series of 
 * Nodes in the LinkedList
 */
int main(int argc, char** argv) 
{
    cout    << "Data Structures in C\\C++11" 	<< endl
    		<< "LinkedList"						<< endl
            << "Hello, World!"					<< endl;

    node *n = new_node(42);
    node *o = new_node(23);
    
    connect_node(n, o);
	connect_node(o, NULL);

	cout	<< "Values: " << endl
			<< "Node 0: " << n->value 			<< endl
			<< "Node 1: " << o->value 			<< endl << endl
			<< "Pointer addresses: " 			<< endl
			<< "n->value	: " << &(n->value) 	<< endl
			<< "o->value	: " << &(o->value) 	<< endl
			<< "&n		: " << &n				<< endl
			<< "&o		: " << &o 				<< endl;

    free(o);
    free(n);

    return 0;
}

/*
int main1(int argc, char** argv) 
{
	
    cout    << "Data Structures in C\\C++14" << endl
            << "Hello, World!" << endl;

    // build linked list
    struct node *n = new_node();
    n->data = 42;
    
    //struct node *n = new_node();
    

    struct node *o = new_node();
    o->data = 23;
    o->next = NULL;

    n->next = o;

    printf("Node 0: %i\n", n->data);
    printf("Node 1: %i\n", (n->next)->data);

    free(o);
    free(n);

    cout << run_mod() << endl;

    //printf("<Node @%d>\n", n);

    return 0;
}

int main2(int argc, char** argv)
{
    cout    << "Data Structures in C\\C++14" << endl
            << "Hello, World!" << endl << endl
            << "Linked List:" << endl;

    // build linked list
    struct node *n1 = new_node(42);
    struct node *n2 = new_node(23);
    struct node *n3 = new_node(34);
    struct node *n4 = new_node(23);

    if (n4)
        n4->next = NULL;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout    << "Node 0: " << n1->data << endl
            << "Node 1: " << n2->data << endl
            << "Node 2: " << n3->data << endl
            << "Node 3: " << n4->data << endl;

    //cout << "Node 1: " << (n->next)->data << endl;

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    //cout << run_mod() << endl;

    //printf("<Node @%d>\n", n);

    return 0;
}
*/
