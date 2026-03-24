
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"

int main( void ) {

    // create some nodes
    Node *zeiro = createNode(createData(0));
    Node *first = createNode(createData(1));
    Node *second = createNode(createData(2));
    Node *third = createNode(createData(3));

    // link the nodes
    zeiro->next = first;
    first->next = second;
    second->next = third;
    
    // print the data by following links
    // traverseI( zeiro );
    // traverseW(zeiro);
    traverseR(zeiro);

    // free all node memory (using traversal)
    freeNodes( zeiro );

    return 0;
}
