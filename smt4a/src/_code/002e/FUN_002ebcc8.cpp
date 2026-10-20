/* NON_MATCHING: the payload pointer is rebuilt from r4 (saved node) in retail, from r1 here. */
#include "common.h"

extern "C" {

/* 16-byte list node header; the payload follows it. */
typedef struct ListNode {
    u8 unk00[0xc];
    struct ListNode *next;  /* 0x0c */
} ListNode;

/* Singly linked list: only the head pointer is used here. */
typedef struct {
    u8 unk00[4];
    ListNode *head;         /* 0x04 */
} List;

int FUN_002e9318(ListNode *payload);

/* Pushes `node` on the front of `list`, initialising its payload first when asked. */
void FUN_002ebcc8(List *list, ListNode *node, int initPayload)
{
    node->next = list->head;
    if (initPayload != 0) {
        FUN_002e9318(node + 1);
    }
    list->head = node;
}

} /* extern "C" */
