/* NON_MATCHING: canonical ScopedCriticalLock restores lock-address setup; retail keeps an extra node-pointer copy and paired links use LDRD instead of LDM. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

struct CriticalSection {
    u32 state;
};

struct ListNode {
    /* 0x00 */ ListNode *prev;
    /* 0x04 */ ListNode *next;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
};

struct LockedList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ListNode *head;
    /* 0x0c */ CriticalSection lock;
};

/* Unlinks `node` from the circular list under the list's lock and clears the node. */
void FUN_0017e1c0(LockedList *list, ListNode *node)
{
    ScopedCriticalLock lock(list->lock);
    if (node->prev == node) {
        list->head = NULL;
    } else {
        if (list->head == node) {
            list->head = list->head->next;
        }
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    node->next = NULL;
    node->prev = NULL;
    node->unk08 = 0;
    node->unk0c = 0;
}

} /* extern "C" */
