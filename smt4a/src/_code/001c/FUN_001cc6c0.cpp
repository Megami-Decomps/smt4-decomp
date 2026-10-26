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

// Insert `e` into the list before `position`.
static LinkListNode* listInsert(LinkListImpl* list, LinkListNode* position, ListEntry* e)
{
    return nw_ut_internal_LinkListImpl_insert(list, position, &e->node);
}
void FUN_001cc6c0(LinkListImpl* list, ListEntry* entry)
{
    listInsert(list, &list->sentinel, entry);
}
}
