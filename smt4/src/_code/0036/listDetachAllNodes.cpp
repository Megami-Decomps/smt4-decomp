#include "common.h"

struct ListNode {
    /* 0x00 */ ListNode *previous;
    /* 0x04 */ ListNode *next;
};

struct NodeList {
    /* 0x00 */ ListNode *head;
};

/* Detaches every node from the list without freeing it. */
extern "C" void listDetachAllNodes(NodeList *list)
{
    ListNode *node = list->head;
    if (node != NULL) {
        do {
            ListNode *detached = node;
            node = detached->next;
            detached->next = NULL;
            detached->previous = NULL;
        } while (node != NULL);
        list->head = NULL;
    }
}
