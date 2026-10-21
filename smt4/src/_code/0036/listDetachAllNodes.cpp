/* NON_MATCHING: retail keeps the list cursor in r1 and zero in r3; the natural next-pointer loop uses r3 and r2. */
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
            ListNode *next = node->next;
            node->next = NULL;
            node->previous = NULL;
            node = next;
        } while (node != NULL);
        list->head = NULL;
    }
}
