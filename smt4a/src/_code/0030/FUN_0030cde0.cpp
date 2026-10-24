/* NON_MATCHING: one register choice: retail passes the payload address from r4 (the saved node), we use r1 */
#include "common.h"

struct ListNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ ListNode *next;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 payload[4];
};

struct NodeList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ListNode *head;
};

extern "C" {

void FUN_00303350(u8 *payload);

/* Pushes a node on the front of the list, initialising its payload when requested. */
void FUN_0030cde0(NodeList *list, ListNode *node, s32 initPayload)
{
    node->next = list->head;
    if (initPayload != 0) {
        FUN_00303350(node->payload);
    }
    list->head = node;
}

} /* extern "C" */
