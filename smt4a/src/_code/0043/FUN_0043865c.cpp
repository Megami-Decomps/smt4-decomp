/* NON_MATCHING: retail copies the current node to ip (mov ip, r3) and loads its value into r3 afterwards; the build loads the value into ip directly (one instruction fewer). */
#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ struct ListNode *prev;
    /* 0x04 */ struct ListNode *next;
    /* 0x08 */ s32 value;
} ListNode;

/* Searches the circular list `head` for the node whose value equals *key; *found ends on that node, or on `head` when there is none. */
void FUN_0043865c(ListNode **found, ListNode *head, s32 *key)
{
    ListNode *node;

    *found = NULL;
    node = head->next;
    *found = node;
    while (node != head) {
        if (node->value == *key) {
            return;
        }
        node = node->next;
        *found = node;
    }
}

} /* extern "C" */
