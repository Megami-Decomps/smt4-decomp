#include "classes/AsdNodeList.h"

/* Detaches every node from the list without freeing it. */
AsdNodeList::~AsdNodeList()
{
    AsdListLink *node = head;
    if (node != NULL) {
        do {
            AsdListLink *detached = node;
            node = detached->next;
            detached->next = NULL;
            detached->previous = NULL;
        } while (node != NULL);
        head = NULL;
    }
}
