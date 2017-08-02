//
// Created by gcraig on 7/25/2017.
//

#ifndef NODE_H
#define NODE_H

#include <assert.h>

/*
struct node {
    int value;
    struct node *next;
};
*/

typedef struct node_s {
	int value;
	struct node_s *next;
} node;

/*
struct node
*new_node() {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    return new_node;
}
*/

node 
*new_node(int val) 
{
	//node *new_node = (node) malloc (sizeof (node));
	struct node_s *new_node = (struct node_s*) malloc(sizeof(struct node_s));
	
	if (new_node)
		new_node->value = val;
		
	return new_node;
}

void
connect_node(node *start_node, node *next_node) 
{
	//assert(start_node != NULL);
	//assert(next_node != NULL);
	
	//start_node->next = next_node->next;
	// ?
}

void
delete_node(node *node) 
{
	if (node)
		free(node);
}

/*
struct node
*new_node(int d)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));

    if (new_node)
        new_node->data = d;

    return new_node;

}
*/

#endif //NODE_H

