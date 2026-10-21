/* NON_MATCHING: retail uses mov r2, r1 where the compiled block uses add r2, r1, #4. */
#include "common.h"

struct LinkListNode {
    LinkListNode* previous; // 0x00
    LinkListNode* next;     // 0x04
};

struct LinkListImpl {
    u32 count;             // 0x00
    LinkListNode sentinel; // 0x04
};

struct ListEntry {
    u32 unk00;             // 0x00
    LinkListNode node;      // 0x04
};

extern "C" {
LinkListNode* nw_ut_internal_LinkListImpl_insert(
    LinkListImpl* list, LinkListNode* position, LinkListNode* node);

void FUN_001cc6c0(LinkListImpl* list, ListEntry* entry)
{
    nw_ut_internal_LinkListImpl_insert(list, &list->sentinel, &entry->node);
}
}
