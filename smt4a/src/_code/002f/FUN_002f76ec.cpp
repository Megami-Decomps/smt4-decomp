/* NON_MATCHING: the link address is copied from r4 in retail; here from r1 (same value). */
#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ struct ListNode *next;
    /* 0x10 */ u8 link[8];
} ListNode;

typedef struct List {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ListNode *head;
} List;

int FUN_002eda4a(void *link);

/* Pushes `node` on the front of `list`; if `init` is set, first runs FUN_002eda4a on the node's link. */
void FUN_002f76ec(List *list, ListNode *node, int init)
{
    node->next = list->head;
    if (init != 0) {
        FUN_002eda4a(node->link);
    }
    list->head = node;
}

} /* extern "C" */
