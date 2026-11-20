/* NON_MATCHING: armcc folds &list->end directly from owner (+40/+28) rather than from list (+4). */
#include "common.h"

struct LinkListNode {
    LinkListNode *next;
    LinkListNode *prev;
};

struct LinkListIter {
    LinkListNode *node;
    explicit LinkListIter(LinkListNode *n) : node(n) {}
};

struct LinkListImpl;
extern "C" void nw_ut_internal_LinkListImpl_insert(LinkListImpl *list, LinkListIter pos, LinkListNode *node);

struct LinkListImpl {
    u32 count;
    LinkListNode end;
    void pushBack(LinkListNode *node)
    {
        nw_ut_internal_LinkListImpl_insert(this, LinkListIter(&end), node);
    }
};

struct LinkListOwner {
    u8 unk00[0x18];
    LinkListImpl primary;   /* 0x18 */
    LinkListImpl secondary; /* 0x24 */
};

struct LinkListItem {
    u8 unk00[0x18];
    u8 kind;                /* 0x18 */
    u8 unk19[3];
    LinkListNode node;      /* 0x1C */
};

extern "C" {
/* Inserts an item into the primary list when kind == 2, otherwise into the secondary list. */
void linkListInsertByKind(LinkListOwner *owner, LinkListItem *item)
{
    if (item->kind != 2) {
        owner->secondary.pushBack(&item->node);
    } else {
        owner->primary.pushBack(&item->node);
    }
}
}
