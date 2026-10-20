/* NON_MATCHING: retail copies the item pointer into r2 first (mov r2, r1; add r2, r2, #24) where this adds straight from r1. */
#include "common.h"

extern "C" {

typedef struct LinkNode {
    u32 next;
    u32 prev;
} LinkNode;

typedef struct LinkList {
    u32 count;
    LinkNode end; /* 0x04 */
} LinkList;

typedef struct Owner {
    u8 unk00[0x18];
    LinkList list; /* 0x18 */
} Owner;

typedef struct Item {
    u8 unk00[8];
    Owner *owner;  /* 0x08 */
    u8 unk0c[0xc];
    LinkNode link; /* 0x18 */
} Item;

extern void nw_ut_internal_LinkListImpl_insert(LinkList *list, LinkNode *position, LinkNode *node);

/* Attaches `item` to `owner` and appends it to the owner's list. */
void FUN_002bf584(Owner *owner, Item *item)
{
    LinkList *list = &owner->list;

    item->owner = owner;
    nw_ut_internal_LinkListImpl_insert(list, &list->end, &item->link);
}

} /* extern "C" */
